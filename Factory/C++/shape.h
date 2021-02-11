#ifndef _SHAPE_H_
#define _SHAPE_H_

#include <iostream>

class Shape
{
public:
    Shape() = default;
    virtual void draw() = 0;
    virtual ~Shape() = default;
};

#endif /* _SHAPE_H_ */