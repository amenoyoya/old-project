rem LCC32-WIN
lcc -O mas_smp.c >err.txt
lrc mas_smp.rc >>err.txt
lcclnk -subsystem windows -o mas_smp.exe mas_smp.obj mas_smp.res >>err.txt
type err.txt
