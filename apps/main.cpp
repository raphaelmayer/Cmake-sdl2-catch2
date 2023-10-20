#include <SDL.h>
#include <lib.hpp>

int main(int argc, char *argv[])
{
	SDL_Init(SDL_INIT_VIDEO);

	SDL_Window *window = SDL_CreateWindow("SDL2", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

	// Game game = Game();

	bool running = true;
	while (running) {
		SDL_Event event;
		SDL_PollEvent(&event);
		switch (event.type) {
		case SDL_QUIT: {
			running = false;
			break;
		}
		}

		// clear screen
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
		SDL_RenderClear(renderer);

		// draw a point
		SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
		SDL_RenderDrawPoint(renderer, 100, 100);
		// draw a line
		SDL_RenderDrawLine(renderer, 200, 200, 600, 200);

		// flip buffers and display what we've drawn
		SDL_RenderPresent(renderer);
	}

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}