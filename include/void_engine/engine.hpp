#pragma once

#include "void_engine/types/renderable_object.hpp"
#include <void_engine/window.hpp>

#include <SDL3/SDL_render.h>

#include <vector>

namespace voe {

class Engine {

private:
  Window *window = nullptr;
  SDL_Renderer *renderer = nullptr;

  std::vector<RenderableObject *> objects;

public:
  Engine();
  ~Engine();

  void run();
};

} // namespace voe