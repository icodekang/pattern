#include "shape_factory.h"

int main()
{
    ShapeFactory shape_factory;

    Shape *shape1 = shape_factory.get_shape("circle");
    shape1->draw();

    Shape *shape2 = shape_factory.get_shape("rectangle");
    shape2->draw();

    Shape *shape3 = shape_factory.get_shape("square");
    shape3->draw();

    delete shape1;
    delete shape2;
    delete shape3;

    return 0;
}