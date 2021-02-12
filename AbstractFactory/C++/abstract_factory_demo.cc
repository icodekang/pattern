#include "factory_producer.h"

int main()
{
    AbstractFactory *shape_factory = FactoryProducer::get_factory("shape");

    Shape *shape1 = shape_factory->get_shape("circle");
    shape1->draw();

    Shape *shape2 = shape_factory->get_shape("rectangle");
    shape2->draw();

    Shape *shape3 = shape_factory->get_shape("square");
    shape3->draw();

    AbstractFactory *color_factory = FactoryProducer::get_factory("color");

    Color *color1 = color_factory->get_color("red");
    color1->fill();

    Color *color2 = color_factory->get_color("green");
    color2->fill();

    Color *color3 = color_factory->get_color("blue");
    color3->fill();

    delete color1;
    delete color2;
    delete color3;
    delete color_factory;
    delete shape1;
    delete shape2;
    delete shape3;
    delete shape_factory;
    
    return 0;
}