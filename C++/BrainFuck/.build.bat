@%~d0
@cd %~dp0
@call C:\App\native-toolchain\cvars.bat

g++ -std=c++11 -static -O1 -Os -D"_hypot=hypot" -o brainfuck01.exe brainfuck01.cpp
g++ -std=c++11 -static -O1 -Os -D"_hypot=hypot" -o brainfuck02.exe brainfuck02.cpp
g++ -std=c++11 -static -O1 -Os -D"_hypot=hypot" -o brainfuck03.exe brainfuck03.cpp

upx --best *.exe
