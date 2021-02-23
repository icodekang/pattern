#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "shape.h"

class Circle: public Shape
{
public:
    Circle();
    virtual void draw();
    virtual Shape *clone();
    virtual ~Circle() = default;
};

#endif /* _CIRCLE_H_ */ 