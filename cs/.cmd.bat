@set v2=C:\Windows\Microsoft.NET\Framework64\v2.0.50727
@set v3=C:\Windows\Microsoft.NET\Framework64\v3.5
@set v4=C:\Windows\Microsoft.NET\Framework64\v4.0.30319

@set path=%v4%;%path%
@set wpf_opt=/r:PresentationCore.dll;PresentationFramework.dll;WindowsBase.dll
@set wpf_opt_v4=/r:WPF\PresentationCore.dll;WPF\PresentationFramework.dll;WPF\WindowsBase.dll;System.Xaml.dll
@set excel_opt=/r:"C:\Program Files (x86)\Microsoft Office\Office15\DCF\Microsoft.Office.Interop.Excel.dll"

@cmd.exe