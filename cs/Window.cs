using System;
using System.IO;
using System.Xml;
using System.Windows;
using System.Windows.Markup;

public class Sample {
  [STAThread]
  static void Main(string[] args) {
    Window win = null;
    // 作成したWindow.xmlを読み込んで、Windowsオブジェクトを取得
    using (FileStream infs = new FileStream("Window.xml", FileMode.Open)) {
      XmlReader xmlReader = XmlReader.Create(infs);
      win = (Window)XamlReader.Load(xmlReader);
    }
    // Window表示
    Application app = new Application();
    app.Run(win);
  }
}

// Compiler required version > 3.5: csc.exe /target:winexe /r:PresentationCore.dll;PresentationFramework.dll;WindowsBase.dll Window.cs