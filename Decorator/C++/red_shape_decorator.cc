#include "red_shape_decorator.h"

RedShapeDecorator::RedShapeDecorator(Shape *decorated_shape): ShapeDecorator(decorated_shape)
{

}

void RedShapeDecorator::draw()
{
    decorated_shape->draw();
    set_red_border(decorated_shape);
}

void RedShapeDecorator::set_red_border(Shape *decorated_shape)
{
    std::cout << "border color: red" << std::endl;
}