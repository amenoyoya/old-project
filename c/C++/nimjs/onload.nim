proc changeBG(color: cstring): void {.importc.}
when isMainModule:
    changeBG "green"
