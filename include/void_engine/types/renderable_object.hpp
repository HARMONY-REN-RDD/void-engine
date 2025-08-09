#pragma once

#include <void_engine/types/base_object.hpp>

#include <SDL3/SDL_render.h>

namespace voe {

class RenderableObject : public BaseObject {

public:
  virtual void render(SDL_Renderer *renderer) = 0;
  
};

} // namespace voe
