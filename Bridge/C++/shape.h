#ifndef _SHAPE_H_
#define _SHAPE_H_

#include "red_circle.h"
#include "green_circle.h"

class Shape
{
protected:
    DrawApi *draw_api;

public:
    Shape(DrawApi *draw_api);
    virtual void draw();
    virtual ~Shape();
};

#endif /* _SHAPE_H_ */