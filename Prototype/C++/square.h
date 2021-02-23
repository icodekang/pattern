#ifndef _SQUARE_H_
#define _SQUARE_H_

#include "shape.h"

class Square: public Shape
{
public:
    Square();
    virtual void draw();
    virtual Shape *clone();
    virtual ~Square() = default;
};

#endif /* _SQUARE_H_ */