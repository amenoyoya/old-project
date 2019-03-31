#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <stdio.h>

int main(){
	if(SDL_Init(SDL_INIT_VIDEO) != 0) return printf("SDL_Init error: %s\n", SDL_GetError());
	
	auto win = SDL_CreateWindow("こんにちは世界!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
	if(!win){
		printf("SDL_CreateWindow error: %s\n", SDL_GetError());
		SDL_Quit();
		return 1;
	}
	
	auto ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if(!ren){
		SDL_DestroyWindow(win);
		printf("SDL_CreateRenderer Error: %s\n", SDL_GetError());
		SDL_Quit();
		return 1;
	}
	
	SDL_Event e;
	bool quit = false;
	while(!quit){
		while(SDL_PollEvent(&e)){
			if(e.type == SDL_QUIT) quit = true;
		}
		SDL_Delay(1);
	}
	SDL_DestroyRenderer(ren);
	SDL_DestroyWindow(win);
	SDL_Quit();
	return 0;
}
