using System;
using System.Diagnostics;
using System.Runtime.InteropServices;
using System.Text;
using System.IO;
using System.Windows.Forms;

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
  private static extern IntPtr FindWindowEx(IntPtr hwndParent, IntPtr hwndChildAfter, String lpClassName, String lpWindowName);
  
  [DllImport("user32")]
  private static extern bool IsWindowVisible(IntPtr hWnd);
  
  [DllImport("user32", CharSet = CharSet.Auto)]
  private static extern int GetWindowText(IntPtr hWnd, StringBuilder lpString, int nMaxCount);
  
  [DllImport("user32", CharSet = CharSet.Auto)]
  private static extern int GetClassName(IntPtr hWnd, StringBuilder lpString, int nMaxCount);
  
  [DllImport("user32")]
  private static extern int GetWindowThreadProcessId(IntPtr hWnd, out int lpdwProcessId);
  
  [DllImport("user32", CharSet = CharSet.Auto)]
  private static extern bool PostMessage(IntPtr hWnd, UInt32 msg, int wParam, int lParam);
  [DllImport("user32", CharSet = CharSet.Auto)]
  private static extern IntPtr SendMessage(IntPtr hWnd, UInt32 msg, int wParam, StringBuilder lParam);
  private const int WM_GETTEXT = 0x00D;
  private const int WM_CLOSE = 0x010;
  private const int WM_DESTROY = 0x020;
  private const int WM_KEYDOWN = 0x100;
  private const int WM_KEYUP = 0x101;
  private const int WM_LBUTTONDOWN = 0x201;
  private const int WM_LBUTTONUP = 0x202;
  private const int WM_BUTTONSTATE = 0x0F3;
  
  [DllImport("user32")]
  private static extern bool SetForegroundWindow(IntPtr hWnd);
  [DllImport("user32")]
  private static extern bool ActivateWindow(IntPtr hWnd);
  
  static IntPtr parentWnd, spreadWnd, buttonWnd, infoWnd;
  static int curInfo;
  static String address, company;
  
  [STAThread]
  static void Main(string[] args) {
    EnumWindows(EnumerateWindows, IntPtr.Zero);
    if(parentWnd != IntPtr.Zero) EnumChildWindows(parentWnd, EnumerateChildWindows, IntPtr.Zero);
    if(spreadWnd != IntPtr.Zero && buttonWnd != IntPtr.Zero){
      SetForegroundWindow(parentWnd);
      System.Threading.Thread.Sleep(10);
      PostMessage(buttonWnd, WM_BUTTONSTATE, 1, 0);
      PostMessage(buttonWnd, WM_LBUTTONDOWN, 0, 0);
      PostMessage(buttonWnd, WM_LBUTTONUP, 0, 0);
      System.Threading.Thread.Sleep(1000);
      EnumWindows(EnumerateWindows, IntPtr.Zero);
      if(infoWnd != IntPtr.Zero){
        EnumChildWindows(infoWnd, EnumerateChildWindows, IntPtr.Zero);
        Console.WriteLine("{0}: {1}", address, company);
        PostMessage(infoWnd, WM_CLOSE, 0, 0);
      }
    }
  }
  
  private static bool EnumerateWindows(IntPtr hWnd, IntPtr lParam){
    // ウィンドウが可視の場合
    if(IsWindowVisible(hWnd)){
      StringBuilder caption = new StringBuilder(0x1000), name = new StringBuilder(0x100);
      SendMessage(hWnd, WM_GETTEXT, caption.Capacity, caption);
      GetClassName(hWnd, name, name.Capacity);
      if(name.ToString() == "ThunderRT6FormDC"){
        if(caption.ToString().StartsWith("納入通知書")) infoWnd = hWnd;
        else parentWnd = hWnd;
        return false;
      }
    }
    return true;
  }
  
  private static bool EnumerateChildWindows(IntPtr hWnd, IntPtr lParam){
    if(IsWindowVisible(hWnd)){
      StringBuilder caption = new StringBuilder(0x1000), name = new StringBuilder(0x100);
      SendMessage(hWnd, WM_GETTEXT, caption.Capacity, caption);
      GetClassName(hWnd, name, name.Capacity);
      //Console.WriteLine("{0} ({1})", caption, name);
      if(caption.ToString() == "実行(&O)") buttonWnd = hWnd;
      if(name.ToString() == "SS32X25_Spread") spreadWnd = hWnd;
      if(caption.ToString() == "職員"){
        curInfo = 1;
        address = company = "";
      }
      if(curInfo > 0){
        if(name.ToString() == "ImTextWndClass"){
          if(curInfo < 3) address += " " + caption.ToString();
          if(curInfo++ == 6){
            company = caption.ToString();
            curInfo = 0;
          }
        }
      }
    }
    return true;
  }
}
