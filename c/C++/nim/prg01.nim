### 01. nim�̊�{ ###

import os

echo "What's your name?"
# var name: string = readLine(stdin)
# var name: string = stdin.readLine
# ���ׂĂ̊֐���()�͏ȗ��\!?
var name = stdin.readLine()

if name == "":
    echo "Poor soul, you lost your name?"
elif name == "name":
    echo "Very funny, your name is name."
else:
    echo "Hi, ", name, "!"

# �߂�l�ɑ΂��鏈���������s��Ȃ��ꍇ�Adiscard���w��
discard os.execShellCmd "pause"
