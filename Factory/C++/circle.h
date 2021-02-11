#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "shape.h"

class Circle: public Shape
{
public:
    Circle() = default;
    virtual void draw();
    virtual ~Circle() = default;
};

#endif /* _CIRCLE_H_ */