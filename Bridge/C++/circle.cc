#include "circle.h"

Circle::Circle(int x, int y, int radius, DrawApi *draw_api): Shape(draw_api)
{
    this->x = x;
    this->y = y;
    this->radius = radius;
}

void Circle::draw()
{
    draw_api->draw_circle(radius, x, y);
}