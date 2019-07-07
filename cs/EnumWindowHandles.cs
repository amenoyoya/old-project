using System;
using System.Diagnostics;
using System.Runtime.InteropServices;
using System.Text;
using System.IO;

class EnumWindowHandles{
  // EnumWindowsから呼び出されるコールバック関数WNDENUMPROCのデリゲート
  private delegate bool WNDENUMPROC(IntPtr hWnd, IntPtr lParam);
  
  [DllImport("user32")]
  private static extern bool EnumWindows(WNDENUMPROC lpEnumFunc, IntPtr lParam);
  
  [DllImport("user32")]
  private static extern bool EnumChildWindows(IntPtr hWndParent, WNDENUMPROC lpEnumFunc, IntPtr lParam);
  
  [DllImport("user32")]
  private static extern IntPtr FindWindow(String lpClassName, String lpWindowName);
  
  [DllImport("user32")]
  private static extern bool IsWindowVisible(IntPtr hWnd);
  
  [DllImport("user32", CharSet = CharSet.Auto)]
  private static extern int GetWindowText(IntPtr hWnd, StringBuilder lpString, int nMaxCount);
  
  [DllImport("user32", CharSet = CharSet.Auto)]
  private static extern int GetClassName(IntPtr hWnd, StringBuilder lpString, int nMaxCount);
  
  [DllImport("user32")]
  private static extern int GetWindowThreadProcessId(IntPtr hWnd, out int lpdwProcessId);
  
  [DllImport("user32", CharSet = CharSet.Auto)]
  private static extern IntPtr SendMessage(IntPtr hWnd, UInt32 msg, int wParam, StringBuilder lParam);
  private const int WM_GETTEXT = 0x00D;
  
  [DllImport("user32")]
  private static extern bool EnableWindow(IntPtr hWnd);
  
  static StreamWriter file;
  
  [STAThread]
  static void Main(string[] args) {
    file = new StreamWriter("EnumWindowHandles.txt", false, Encoding.GetEncoding("UTF-8"));
    EnumWindows(EnumerateWindows, IntPtr.Zero);
    file.Close();
    file.Dispose();
  }
  
  // ウィンドウを列挙するためのコールバックメソッド
  private static bool EnumerateWindows(IntPtr hWnd, IntPtr lParam){
    // ウィンドウが可視の場合
    if (IsWindowVisible(hWnd)){ // ウィンドウのキャプションとプロセス名を表示する
      StringBuilder caption = new StringBuilder(0x1000), name = new StringBuilder(0x100);
      //GetWindowText(hWnd, caption, caption.Capacity);
      SendMessage(hWnd, WM_GETTEXT, caption.Capacity, caption);
      GetClassName(hWnd, name, name.Capacity);
      // ウィンドウハンドルからプロセスIDを取得
      int processId;
      GetWindowThreadProcessId(hWnd, out processId);
      // プロセスIDからProcessクラスのインスタンスを取得
      Process p = Process.GetProcessById(processId);
      // 各種情報表示
      file.WriteLine(String.Format("'{0}' ({1}) [{2}]", caption, name, p.ProcessName));
      // 子ウィンドウを列挙
      EnumChildWindows(hWnd, EnumerateChildWindows, IntPtr.Zero);
    }
    // ウィンドウの列挙を継続するにはtrueを返す必要がある
    return true;
  }
  
  // 子ウィンドウを列挙するためのコールバックメソッド
  private static bool EnumerateChildWindows(IntPtr hWnd, IntPtr lParam){
    // ウィンドウが可視の場合
    if (IsWindowVisible(hWnd)){ // ウィンドウのキャプションとクラス名を表示する
      StringBuilder caption = new StringBuilder(0x1000), name = new StringBuilder(0x100);
      SendMessage(hWnd, WM_GETTEXT, caption.Capacity, caption);
      GetClassName(hWnd, name, name.Capacity);
      file.WriteLine(String.Format("  '{0}' ({1})", caption, name));
    }
    // ウィンドウの列挙を継続するにはtrueを返す必要がある
    return true;
  }
}
