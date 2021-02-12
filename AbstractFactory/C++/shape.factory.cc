#include "shape_factory.h"

Shape *ShapeFactory::get_shape(std::string shape)
{
    if (shape.empty()) {
        return nullptr;
    }

    if (!shape.compare("circle")) {
        return new Circle();
    } else if (!shape.compare("rectangle")) {
        return new Rectangle();
    } else if (!shape.compare("square")) {
        return new Square();
    }

    return nullptr;
}

Color *ShapeFactory::get_color(std::string color)
{
    return nullptr;
}