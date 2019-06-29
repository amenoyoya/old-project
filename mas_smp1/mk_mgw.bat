rem MinGW
windres -o mas_smp_rc.o mas_smp.rc
gcc -mwindows -o mas_smp.exe mas_smp.c mas_smp_rc.o
