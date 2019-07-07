set NM=mas_smp
bcc32  -tW -c -Ox %NM%.c >err.txt
brcc32 %NM%.rc >>err.txt
ilink32 -Lc:\borland\bcc55\lib\psdk -n -V4.0 -aa -Tpe c0w32.obj %NM%.obj, %NM%.exe, %NM%.map, kernel32.lib user32.lib gdi32.lib cw32.lib,, %NM%.res >>err.txt
type err.txt
