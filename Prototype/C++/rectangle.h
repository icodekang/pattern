#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include "shape.h"

class Rectangle: public Shape
{
public:
    Rectangle();
    virtual void draw();
    virtual Shape *clone();
    virtual ~Rectangle() = default;
};

#endif /* _RECTANGLE_H_ */ 