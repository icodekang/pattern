#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "shape.h"

class Circle: public Shape
{
private:
    int x;
    int y;
    int radius;

public:
    Circle(int x, int y, int radius, DrawApi *draw_api);
    virtual void draw();
};

#endif /* _CIRCLE_H_ */