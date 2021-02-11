#include "shape_factory.h"

Shape *ShapeFactory::get_shape(std::string shape_type)
{
    if (shape_type.empty()) {
        return nullptr;
    }

    if (!shape_type.compare("circle")) {
        return new Circle();
    } else if (!shape_type.compare("rectangle")) {
        return new Rectangle();
    } else if (!shape_type.compare("square")) {
        return new Square();
    }

    return nullptr;
}