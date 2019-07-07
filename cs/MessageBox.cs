using System;
using System.Runtime.InteropServices;
 
class Hello{
  [DllImport("user32.dll", CharSet=CharSet.Unicode)]
  private extern static uint MessageBox(IntPtr hWnd, string lpText, string lpCaption, uint uType);
  static void Main(string[] args){
    MessageBox( new IntPtr(0), "Hello, Win32 API(C#) World!", "メッセージボックス❤", 0 );
  }
}

// csc /target:winexe MessageBox.cs