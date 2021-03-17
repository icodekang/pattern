#ifndef _RED_CIRCLE_H_
#define _RED_CIRCLE_H_

#include "draw_api.h"

class RedCircle: public DrawApi
{
public:
    RedCircle() = default;
    virtual void draw_circle(int radius, int x, int y);
    virtual ~RedCircle() = default;
};

#endif /* _RED_CIRCLE_H_ */