#include "color_factory.h"

Shape *ColorFactory::get_shape(std::string shape)
{
    return nullptr;
}

Color *ColorFactory::get_color(std::string color)
{
    if (color.empty()) {
        return nullptr;
    }

    if (!color.compare("red")) {
        return new Red();
    } else if (!color.compare("green")) {
        return new Green();
    } else if (!color.compare("blue")) {
        return new Blue();
    }

    return nullptr;
}