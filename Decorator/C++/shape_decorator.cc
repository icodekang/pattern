#include "shape_decorator.h"

ShapeDecorator::ShapeDecorator(Shape *decorated_shape): decorated_shape(decorated_shape)
{

}

void ShapeDecorator::draw()
{
    decorated_shape->draw();
}

ShapeDecorator::~ShapeDecorator()
{
    if (decorated_shape) {
        delete decorated_shape;
        decorated_shape = nullptr;
    }
}