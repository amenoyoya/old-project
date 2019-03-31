### 01. nimの基本 ###

import os

echo "What's your name?"
# var name: string = readLine(stdin)
# var name: string = stdin.readLine
# すべての関数の()は省略可能!?
var name = stdin.readLine()

if name == "":
    echo "Poor soul, you lost your name?"
elif name == "name":
    echo "Very funny, your name is name."
else:
    echo "Hi, ", name, "!"

# 戻り値に対する処理を何も行わない場合、discardを指定
discard os.execShellCmd "pause"
