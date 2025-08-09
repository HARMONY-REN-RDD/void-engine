#pragma once

#include <SDL3/SDL_video.h>

#include <string>

namespace voe {

class Window {
private:
  SDL_Window *window;

public:
  Window();
  ~Window();

  operator SDL_Window *() { return this->window; }
};

} // namespace voe