from ctypes import *
import time
import datetime
import os
import sys
import wx

gdll = cdll.GaussianController

''' Gaussianバッチジョブの書式 '''
bat_text = """!
!User created batch file
!start=1
!
{0} , {1}.out"""


''' Gaussianジョブリスト管理・実行クラス '''
class GaussianJobsThread:
	def __init__(self):
		self.jobs = [] # ジョブリスト
		self.cur = 0 # 現在実行中のジョブindex
		self.complete = 0 # 完了したジョブ数
		self.flag = False # スレッド実行フラグ
		self.handle = 0 # Gaussianハンドラー
		self.hwnd = c_uint(0) # Gaussianメインウィンドウハンドル
		self.button = c_uint(0) # Gaussianスタートボタンハンドル
		self.status = c_uint(0) # Gaussianステータスハンドル
		
		# env.txtから環境変数を読み込み、Gaussianを起動させる
		exec(open("env.txt").read())
		os.environ["PATH"] = os.environ["GAUSS_EXEDIR"]+";"+os.environ["PATH"]
		
		self.handle = gdll.openProcess("g09w.exe", byref(self.hwnd), None)
		if self.handle == 0 or self.hwnd.value == 0:
			wx.MessageBox("Gaussianの起動に失敗しました\nenv.txtを編集して、Gaussianのある正しいディレクトリを指定してください",
				"GaussianJobエラー")
			sys.exit(1)
		gdll.getGaussianControl(self.hwnd, byref(self.button), byref(self.status))
		if self.button.value == 0 or self.status.value == 0:
			wx.MessageBox("Gaussianの制御に失敗しました", "GaussianJobエラー")
			self.close()
			sys.exit(2)
	
	
	def close(self):
		gdll.killProcess(self.handle)
		gdll.closeProcess(self.handle)
	
	
	## ジョブリスト処理を実行
	def start(self):
		self.flag = True
		buttons[4].Disable() # クリアボタン無効化
		buttons[5].Disable() # 実行ボタン無効化
		frame.SetStatusText("GaussianJob実行中") # Status表示
	
	
	## ジョブの追加/削除
	def add(self, gjf_path):
		job = {
			"path": gjf_path,
			"workdir": os.path.dirname(gjf_path),
			"leaf": os.path.basename(gjf_path)
		}
		job["stem"], job["ext"] = os.path.splitext(job["leaf"])
		self.jobs.append(job)
		gjf_list.append(gjf_path) # gjfリスト更新
		job_list.Append(gjf_path) # リストボックス更新
		frame.SetStatusText("新規ジョブ '"+gjf_path+"' が追加されました") # Status表示
	
	def pop(self, index): # 未処理のジョブのみ削除可能
		if len(self.jobs) > index >= self.complete:
			frame.SetStatusText("ジョブ '"+self.jobs[index]["path"]+"' が削除されました") # Status表示
			self.jobs.pop(index)
			gjf_list.pop(index) # gjfリスト更新
			job_list.Delete(index) # リストボックス更新
			return True
		else:
			frame.SetStatusText("実行中/処理済みのジョブを削除することは出来ません") # Status表示
			return False
	
	def popList(self, list): # 未処理のジョブを複数削除
		diff = 0
		list.sort()
		for i in list:
			if self.pop(i-diff): diff += 1
	
	
	## ジョブリスト全クリア(停止中のみ)
	def clear(self):
		if not self.flag:
			self.jobs.clear()
			gjf_list.clear()
			job_list.Clear()
			self.cur, self.complete = 0, 0
	
	
	## 未処理のジョブを上/下に移動
	def up(self, index):
		if index-1 >= self.complete:
			self.jobs[index-1], self.jobs[index] = self.jobs[index], self.jobs[index-1]
			gjf_list[index-1], gjf_list[index] = gjf_list[index], gjf_list[index-1]
			job_list.SetItems(gjf_list) # リストボックス更新
			job_list.SetSelection(index-1)
		elif index > 0:
			frame.SetStatusText("実行中/処理済みのジョブの上に移動することは出来ません") # Status表示
	
	def down(self, index):
		if index+1 < len(self.jobs):
			self.jobs[index+1], self.jobs[index] = self.jobs[index], self.jobs[index+1]
			gjf_list[index+1], gjf_list[index] = gjf_list[index], gjf_list[index+1]
			job_list.SetItems(gjf_list) # リストボックス更新
			job_list.SetSelection(index+1)
	
	
	## ジョブリストを1つずつ処理していく(EVT_TIMERにBindする)
	def run(self, event):
		if not gdll.isProcessAlive(self.handle):
			frame.Close() # Gaussianが終了した場合は自分も終了する
		if self.flag:
			if self.cur >= len(self.jobs):
				self.__stop()
				frame.SetStatusText("全てのジョブを完了しました！") # Status表示
			else:
				if gdll.isGaussianInitialized(self.status):
					# リストにジョブが残っていて、現在実行中のジョブがないなら実行開始
					job = self.jobs[self.cur]
					self.complete += 1 # 実行中ジョブも完了数に含める
					os.chdir(job["workdir"]) # 作業ディレクトリに移動
					if os.path.exists(job["stem"]+".out"):
						os.remove(job["stem"]+".out") # outputファイルを削除(Gaussianの確認ダイアログ回避)
					# バッチファイル作成
					with open(job["stem"]+".bcf", "w") as bat:
						bat.write(bat_text.format(job["path"], job["stem"]))
					time.sleep(0.1)
					# Gaussianにバッチファイルを渡して実行させる
					if not gdll.dropToGaussian(self.hwnd, job["workdir"]+"\\"+job["stem"]+".bcf"):
						timer.Stop()
						wx.MessageBox("Gaussianが実行できませんでした\ntarget: "+job["path"],
							"GaussianJobエラー")
						frame.Close()
					time.sleep(3)
					gdll.startGaussian(self.button)
					
					# 実行中ジョブのテキストに[実行中][実行開始時間]を付加
					d = datetime.datetime.today()
					gjf_list[self.cur] = "*実行中: "+gjf_list[self.cur] \
						+(" <{0:04d}/{1:02d}/{2:02d} {3:02d}:{4:02d}:{5:02d}>".format(d.year, d.month, d.day, d.hour, d.minute, d.second))
					job_list.SetItems(gjf_list) # リストボックス更新
				else:
					if gdll.isGaussianCompleted(self.status): # ジョブの実行が終了したら次のジョブへ
						gdll.initializeGaussian(self.status) # Gaussianステータス初期化
						os.remove(self.jobs[self.cur]["stem"]+".bcf") # 実行していたバッチファイルを削除
						# 完了ジョブのテキストに[完了][実行完了時間]を付加
						d = datetime.datetime.today()
						gjf_list[self.cur] = "*完了: "+gjf_list[self.cur][5:] \
							+(" <{0:04d}/{1:02d}/{2:02d} {3:02d}:{4:02d}:{5:02d}>".format(d.year, d.month, d.day, d.hour, d.minute, d.second))
						job_list.SetItems(gjf_list) # リストボックス更新
						self.cur += 1
	
	## ジョブリスト処理を停止
	def __stop(self):
		self.flag = False
		buttons[4].Enable() # クリアボタン有効化
		buttons[5].Enable() # 実行ボタン有効化


## ファイルドロップによるジョブ追加クラス
class MyFileDropTarget(wx.FileDropTarget):
	def __init__(self, window):
		wx.FileDropTarget.__init__(self)
		self.window = window #ファイルをドロップする対象
	
	def OnDropFiles(self, x, y, filenames):  #ファイルをドロップするときの処理
		for file in filenames:
			stem, ext = os.path.splitext(os.path.basename(file))
			if ext.lower() == ".gjf": gauss.add(file)
			else: frame.SetStatusText("リストに追加できるのはGaussianインプットファイルのみです")
		return True

## ジョブ追加ダイアログ
def addGaussianJob(event):
	dialog = wx.FileDialog(frame, "ジョブファイルを選択してください",
		"", "", "Gaussian input file (*.gjf)|*.gjf", wx.FD_OPEN|wx.FD_FILE_MUST_EXIST|wx.FD_MULTIPLE)
	if dialog.ShowModal() == wx.ID_OK:
		for path in dialog.GetPaths(): gauss.add(path)
	dialog.Destroy()

## ジョブ上移動
def upJob(event):
	selects = job_list.GetSelections()
	if len(selects) > 0: gauss.up(selects[0])

## ジョブ下移動
def downJob(event):
	selects = job_list.GetSelections()
	if len(selects) > 0: gauss.down(selects[0])

## main
if __name__ == '__main__':
	app = wx.App()
	app.locale = wx.Locale(wx.LANGUAGE_JAPANESE)
	
	gjf_list = []
	gauss = GaussianJobsThread()
	
	frame = wx.Frame(None, -1, "GaussianJob ver.2.0.0", size=(480, 480))
	timer = wx.Timer(frame)
	#frame.SetIcon(wx.Icon("icon.png", wx.BITMAP_TYPE_PNG))
	frame.SetIcon(wx.Icon(sys.argv[0], wx.BITMAP_TYPE_ICO))
	frame.CreateStatusBar()
	frame.SetStatusText("Welcome to GaussianJob!")
	frame.Bind(wx.EVT_TIMER, gauss.run)
	timer.Start(100)
	
	panel = wx.Panel(frame, -1)
	panel.SetBackgroundColour("#AFAFAF")
	
	buttons_panel = wx.Panel(panel, -1)
	buttons_panel.SetBackgroundColour("#AFAFAF")
	
	buttons = [
		wx.Button(buttons_panel, -1, "ジョブ追加", size=(100,30)),
		wx.Button(buttons_panel, -1, "ジョブ削除", size=(100,30)),
		wx.Button(buttons_panel, -1, "↑", size=(30,30)),
		wx.Button(buttons_panel, -1, "↓", size=(30,30)),
		wx.Button(buttons_panel, -1, "クリア", size=(60,30)),
		wx.Button(buttons_panel, -1, "実行", size=(50,30))
	]
	buttons[0].SetToolTip(wx.ToolTip("リストにGaussianジョブ(.gjf)を追加します"))
	buttons[0].Bind(wx.EVT_BUTTON, addGaussianJob) # ジョブ追加ボタン
	buttons[1].SetToolTip(wx.ToolTip("選択された未処理のGaussianジョブを削除します"))
	buttons[1].Bind(wx.EVT_BUTTON, lambda event: gauss.popList(job_list.GetSelections())) # ジョブ削除ボタン
	buttons[2].SetToolTip(wx.ToolTip("選択された未処理のGaussianジョブを上に移動します"))
	buttons[2].Bind(wx.EVT_BUTTON, upJob) # ジョブ上移動ボタン
	buttons[3].SetToolTip(wx.ToolTip("選択された未処理のGaussianジョブを下に移動します"))
	buttons[3].Bind(wx.EVT_BUTTON, downJob) # ジョブ下移動ボタン
	buttons[4].SetToolTip(wx.ToolTip("Gaussianジョブを全て削除します"))
	buttons[4].Bind(wx.EVT_BUTTON, lambda event: gauss.clear()) # クリアボタン
	buttons[5].SetToolTip(wx.ToolTip("Gaussianジョブの処理を開始します"))
	buttons[5].Bind(wx.EVT_BUTTON, lambda event: gauss.start()) # ジョブ開始ボタン
	
	buttons_layout = wx.BoxSizer(wx.HORIZONTAL)
	[buttons_layout.Add(btn, flag=wx.ALL, border=5) for btn in buttons]
	buttons_panel.SetSizer(buttons_layout)
	
	list_panel = wx.Panel(panel, -1)
	list_panel.SetBackgroundColour("#AFAFAF")
	list_box = wx.StaticBox(list_panel, -1, "Gaussianジョブリスト")
	job_list = wx.ListBox(list_panel, -1, style=wx.LB_EXTENDED|wx.LB_HSCROLL|wx.LB_NEEDED_SB)
	list_layout = wx.StaticBoxSizer(list_box, wx.VERTICAL)
	list_layout.Add(job_list, proportion=1, flag=wx.EXPAND|wx.ALL, border=5)
	list_panel.SetSizer(list_layout)
	
	frame.SetDropTarget(MyFileDropTarget(job_list)) # D&Dによるジョブ追加可能に
	
	layout = wx.BoxSizer(wx.VERTICAL)
	layout.Add(buttons_panel)
	layout.Add(list_panel, proportion=1, flag=wx.EXPAND|wx.ALL, border=5)
	panel.SetSizer(layout)
	
	frame.Show()
	app.MainLoop()
	gauss.close()
