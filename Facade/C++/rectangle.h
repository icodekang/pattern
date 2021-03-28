#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include "shape.h"

class Rectangle: public Shape
{
public:
    Rectangle() = default;
    virtual void draw();
    virtual ~Rectangle() = default;
};

#endif /* _RECTANGLE_H_ */