using System;
using System.IO;
using System.Drawing;
using System.Windows.Forms;
using Excel = Microsoft.Office.Interop.Excel;
 
class Test{
  [STAThread]
  static void Main(){
    // OpenFileDialogはSTAThreadでのみ使用可能
    Application.Run(new ExcelTest());
  }
}
 
class ExcelTest : Form{
  public ExcelTest(){
    this.StartPosition = FormStartPosition.CenterScreen;
    this.Width = 400;
    this.Height = 250;
    this.Text = "Excel読み書きテスト";
 
    Button btn = new Button(){
      Text = "Excelファイル読み込み",
      Size = new Size(150, 30),
      Location = new Point(50, 50),
      Parent=this,
    };
    btn.Click += new EventHandler(this.btnClick);
  }
 
  private void btnClick(object sender, EventArgs e){
    OpenFileDialog dlg = new OpenFileDialog();
    dlg.Title = "読み込むExcelファイルを選択";
    //dlg.InitialDirectory = Directory.GetCurrentDirectory();
    //dlg.FileName = "ExcelTest.xlsx";
    dlg.Filter = "Excelファイル|*.xls;*.xlsx|マクロ付きExcelファイル|*.xlsm";
    // ファイルの種類 の初期設定を 1 番目に設定する (初期値 1)
    //dlg.FilterIndex = 1;
    // ダイアログボックスを閉じる前に現在のディレクトリを復元する (初期値 false)
    dlg.RestoreDirectory = true;
    // 複数のファイルを選択不可にする (初期値 false)
    //dlg.Multiselect = false;
    //dlg.ShowHelp = false;
    //dlg.ShowReadOnly = false;
    //dlg.ReadOnlyChecked = false;
    // 存在しないファイルを指定した場合は警告を表示する (初期値 true)
    //dlg.CheckFileExists = true;
    // 存在しないパスを指定した場合は警告を表示する (初期値 true)
    //dlg.CheckPathExists = true;
    // 拡張子を指定しない場合は自動的に拡張子を付加する (初期値 true)
    //dlg.AddExtension = true;
    // 有効な Win32 ファイル名だけを受け入れるようにする (初期値 true)
    //dlg.ValidateNames = true;
    // ダイアログを表示し、戻り値が [OK] の場合は、選択したExcelファイルを読み込む
    if (dlg.ShowDialog() == DialogResult.OK) {
      // MessageBox.Show(dlg.FileName);
      
      // Multiselect が true の場合はこのように列挙する
      //foreach (string nFileName in dlg.FileNames) {
        //    MessageBox.Show(nFileName);
      //}
      
      Excel.Application xlApp = new Excel.Application();
      if ( xlApp != null ){
        xlApp.Visible = true;
        Excel.Workbook wb = xlApp.Workbooks.Open(dlg.FileName,
          Type.Missing, Type.Missing, Type.Missing, Type.Missing, Type.Missing,
          Type.Missing, Type.Missing, Type.Missing, Type.Missing, Type.Missing,
          Type.Missing, Type.Missing, Type.Missing, Type.Missing);
          ((Excel.Worksheet)wb.Sheets[1]).Select(Type.Missing);
          Excel.Range aRange = xlApp.get_Range("A1",Type.Missing) as Excel.Range;
          if ( aRange != null ){
            MessageBox.Show(aRange.Value2.ToString());
            aRange.Value2 = "AAA1";
            MessageBox.Show(aRange.Value2.ToString());
          }
          wb.Close(true, Type.Missing, Type.Missing);
          xlApp.Quit();
      }
    }
    dlg.Dispose();
  }
}

// csc /r:"C:\Program Files (x86)\Microsoft Office\Office15\DCF\Microsoft.Office.Interop.Excel.dll" /target:winexe Excel.cs