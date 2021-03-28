#include "shape_factory.h"

std::map<std::string, Shape*> ShapeFactory::circle_map;

Shape *ShapeFactory::get_circle(std::string color)
{
    std::map<std::string, Shape*>::iterator it = circle_map.find(color);
    if (it != circle_map.end()) {
        return it->second;
    }
    Shape *circle = new Circle(color);
    circle_map.insert(std::map<std::string, Shape*>::value_type(color, circle));
    std::cout << "creating circle of color: " << color << std::endl;
    return circle;
}