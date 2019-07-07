rem borland-c/c++
bcc32 -tW -Ox mas_smp.c >err.txt
brc32 mas_smp.rc mas_smp.exe >>err.txt
type err.txt
