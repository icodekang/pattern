#ifndef _SHAPE_MAKER_H_
#define _SHAPE_MAKER_H_

#include "circle.h"
#include "square.h"
#include "rectangle.h"

class ShapeMaker
{
private:
    Shape *circle;
    Shape *square;
    Shape *rectangle;

public:
    ShapeMaker();
    void draw_circle();
    void draw_square();
    void draw_rectangle();
    ~ShapeMaker();
};

#endif /* _SHAPE_MAKER_H_ */