#ifndef _SHAPE_DECORATOR_H_
#define _SHAPE_DECORATOR_H_

#include "circle.h"
#include "rectangle.h"

class ShapeDecorator: public Shape
{
protected:
    Shape *decorated_shape;

public:
    ShapeDecorator(Shape *decorated_shape);
    virtual void draw();
    virtual ~ShapeDecorator();
};

#endif /* _SHAPE_DECORATOR_H_ */