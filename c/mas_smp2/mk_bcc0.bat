set NAME=mas_smp

echo [%NAME%] >err.txt
bcc32  -tW -c -Ox %NAME%.c >>err.txt
brcc32 %NAME%.rc >>err.txt
ilink32 -Lc:\borland\bcc55\lib\psdk -n -V4.0 -aa -Tpe c0w32.obj %NAME%.obj, %NAME%.exe, %NAME%.map, kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib import32.lib cw32.lib ole2w32.lib ,, %NAME%.res >>err.txt
type err.txt

rem goto END
 del %NAME%.map
 del %NAME%.tds
 del %NAME%.res
 del %NAME%.obj
 del %NAME%.il*
 del %NAME%.bak
:END
