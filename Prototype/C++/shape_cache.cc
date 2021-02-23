#include "shape_cache.h"

std::map<std::string, Shape*> ShapeCache::shape_map;

Shape *ShapeCache::get_shape(std::string shape_id) {
    Shape *shape = shape_map.at(shape_id);
    return (Shape *)shape->clone();
}

void ShapeCache::load_cache() {
    Circle *circle = new Circle();
    circle->set_id("1");
    shape_map.insert({circle->get_id(), circle});

    Square *square = new Square();
    square->set_id("2");
    shape_map.insert({square->get_id(), square});

    Rectangle *rectangle = new Rectangle();
    rectangle->set_id("3");
    shape_map.insert({rectangle->get_id(), rectangle});
}