### 02. case-of文 ###
from strutils import parseInt
from os import execShellCmd

echo"A number please: "
let n = parseInt(stdin.readLine) # 書き換え不可能な変数はletで宣言

case n
of 0..2, 4..7:
    echo"The number is in the set: {0, 1, 2, 4, 5, 6, 7}"
of 3, 8:
    echo"The number is 3 or 8"
else:
    discard

discard execShellCmd"pause"
