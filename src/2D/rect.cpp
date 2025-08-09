#include "SDL3/SDL_rect.h"
#include <SDL3/SDL_render.h>

#include <void_engine/types/2D/rect.hpp>

namespace voe {

Rect::Rect(Coordinate2D position, std::uint32_t width, std::uint32_t height) {
  this->position = position;
  this->rect = {static_cast<float>(position.x), static_cast<float>(position.y),
                static_cast<float>(width), static_cast<float>(height)};
}

void Rect::render(SDL_Renderer *renderer) {
  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
  SDL_RenderFillRect(renderer, &rect);
}

} // namespace voe