#ifndef _GREEN_CIRCLE_H_
#define _GREEN_CIRCLE_H_

#include "draw_api.h"

class GreenCircle: public DrawApi
{
public:
    GreenCircle() = default;
    virtual void draw_circle(int radius, int x, int y);
    virtual ~GreenCircle() = default;
};

#endif /* _GREEN_CIRCLE_H_ */