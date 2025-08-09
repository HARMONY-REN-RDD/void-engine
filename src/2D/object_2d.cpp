#include <void_engine/types/2D/object_2d.hpp>

namespace voe {

Object2D::Object2D() {}

Coordinate2D &Object2D::get_position() { return this->position; }

} // namespace voe
