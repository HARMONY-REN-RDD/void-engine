#pragma once

#include <SDL3/SDL_rect.h>

#include <void_engine/types/2D/object_2d.hpp>

namespace voe {

class Rect : public Object2D {
protected:
  SDL_FRect rect;
  std::uint32_t width;
  std::uint32_t height;

public:
  Rect(Coordinate2D position, std::uint32_t width, std::uint32_t height);

  void render(SDL_Renderer *renderer);
};

} // namespace voe