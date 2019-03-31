import strutils

# 必要なライブラリをすべてリンク
{.passL: "-static -lSDL2 -lgdi32 -lole32 -loleaut32 -lwinmm -limm32 -lversion"}
{.passC: "-DSDL_MAIN_HANDLED"} # SDLのmain関数は使わない
#{.passL: "-mwindows"} # コンソール非表示

{.emit: """
#include <SDL.h>
bool isNULL(void *ptr){return NULL == ptr;}
unsigned int event(SDL_Event *e){return e->type;}
""".}

proc isNULL(obj: object): bool {.nodecl, importc: "isNULL"}
proc SDL_Init(flag: int): int {.header: "<SDL.h>", importc: "SDL_Init".}
proc SDL_Quit(): void {.header: "<SDL.h>", importc: "SDL_Quit".}
proc SDL_GetError(): cstring {.header: "<SDL.h>", importc: "SDL_GetError".}
proc SDL_Delay(msec: int): void {.header: "<SDL.h>", importc: "SDL_Delay".}

type
    SDL_Event {.final, header: "<SDL.h>", importc: "SDL_Event*", pure, incompleteStruct.} = object
    SDL_Window {.final, header: "<SDL.h>", importc: "SDL_Window*".} = object

proc SDL_CreateEvent(): SDL_Event {.header: "<SDL.h>", importc: "new SDL_Event".}
proc poll(e: SDL_Event): bool {.header: "<SDL.h>", importc: "SDL_PollEvent".}
proc event(e: SDL_Event): int {.nodecl, importc: "event".}

proc SDL_CreateWindow(title: cstring, x: int, y: int, w: int, h: int, flag: int): SDL_Window {.header: "<SDL.h>", importc: "SDL_CreateWindow".}
# object.destroy()はローカルスコープから外れる時自動的に呼ばれる(デストラクタ)
proc destroy(win: SDL_Window): void {.header: "<SDL.h>", importc: "SDL_DestroyWindow".}


proc main() =
    if SDL_Init(0x00000020) != 0:
        echo("SDL_Init error: ", SDL_GetError())
        return
    
    let win = SDL_CreateWindow("こんにちは世界!", 100, 100, 640, 480, 0x00000004)
    let e = SDL_CreateEvent()
    var quit = false
    
    if isNULL(win):
        echo("SDL_CreateWindow error: ", SDL_GetError())
        SDL_Quit()
        return
    
    while not quit:
        while e.poll():
            if e.event == 0x100: quit = true
        SDL_Delay(1)
    SDL_Quit()

main()
