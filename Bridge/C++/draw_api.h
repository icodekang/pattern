#ifndef _DRAW_API_H_
#define _DRAW_API_H_

#include <iostream>

class DrawApi
{
public:
    DrawApi() = default;
    virtual void draw_circle(int radius, int x, int y) = 0;
    virtual ~DrawApi() = default;
};

#endif /* _DRAW_API_H_ */ 