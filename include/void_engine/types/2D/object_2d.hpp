#pragma once

#include <void_engine/types/renderable_object.hpp>

#include <cstdint>

namespace voe {

struct Coordinate2D {
  std::uint32_t x, y;
};

class Object2D : public RenderableObject {
protected:
  Coordinate2D position;

public:
  Object2D();

  Coordinate2D &get_position();

};

} // namespace voe