#include <SDL3/SDL.h>
#include <void_engine/types/2D/rect.hpp>

#include <void_engine/engine.hpp>

#include <iostream>

namespace voe {

Engine::Engine() {
  //  SDL_SetHint(SDL_HINT_VIDEO_DRIVER, "KMSDRM");

  if (!SDL_Init(SDL_INIT_VIDEO)) {
    SDL_Log("Couldn't initialize SDL: %s", SDL_GetError());
    std::exit(1);
  }

  std::cout << SDL_GetCurrentVideoDriver() << std::endl;

  SDL_HideCursor();

  this->window = new Window();
  this->renderer = SDL_CreateRenderer(*this->window, NULL);

  this->objects.push_back(new Rect({0, 0}, 5000, 100));
}

Engine::~Engine() {
  if (this->renderer)
    SDL_DestroyRenderer(renderer);
  if (this->window)
    delete this->window;
  SDL_Quit();
}

void Engine::run() {
  bool running = true;
  SDL_Event event;

  while (running) {
    while (SDL_PollEvent(&event)) {
      if (event.type == SDL_EVENT_QUIT) {
        running = false;
      }
    }

    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 10);
    SDL_RenderClear(renderer);

    for (auto obj : this->objects) {
      obj->render(this->renderer);
    }

    SDL_RenderPresent(renderer);
  }
}
} // namespace voe
