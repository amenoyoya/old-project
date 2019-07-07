%~d0
cd %~dp0

call C:\VC++2010\vcvars.bat

rc.exe mas_smp.rc
cl.exe /Ox mas_smp.c mas_smp.res
pause
