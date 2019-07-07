rem Digital-Mars C/C++
rcc -32 mas_smp.rc >err.txt 
sc -mn -WA -Bj -j0 mas_smp.c mas_smp.res gdi32.lib >>err.txt 
type err.txt
