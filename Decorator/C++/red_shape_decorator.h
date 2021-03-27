#ifndef _RED_SHAPE_DECORATOR_H_
#define _RED_SHAPE_DECORATOR_H_

#include "shape_decorator.h"

class RedShapeDecorator: public ShapeDecorator
{
public:
    RedShapeDecorator(Shape *decorated_shape);
    virtual void draw();
    void set_red_border(Shape *decorated_shape);
    virtual ~RedShapeDecorator() = default;
};

#endif /* _RED_SHAPE_DECORATOR_H_ */