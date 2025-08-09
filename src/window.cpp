#include "SDL3/SDL_video.h"
#include <void_engine/window.hpp>

namespace voe {

Window::Window() {
  window = SDL_CreateWindow("Void Engine", 0, 0, SDL_WINDOW_FULLSCREEN);
  if (!window) {
    std::exit(1);
  }
}

Window::~Window() {
  if (window)
    SDL_DestroyWindow(this->window);
}

} // namespace voe