local str = io.read()

while str != "quit" {
	u8print(mt_rand(2) == 0 & "›" | "~")
	str = io.read()
}
