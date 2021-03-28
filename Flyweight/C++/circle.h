#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "shape.h"

class Circle: public Shape
{
private:
    std::string color;
    int x, y, radius;

public:
    Circle(std::string color);
    virtual void draw();
    void setx(int x);
    void sety(int y);
    void set_radius(int radius);
    virtual ~Circle() = default;
};

#endif /* _CIRCLE_H_ */