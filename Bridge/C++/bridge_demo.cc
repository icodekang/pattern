#include "circle.h"

int main()
{
    Shape *red_circle = new Circle(100, 100, 10, new RedCircle());
    Shape *green_circle = new Circle(100, 100, 10, new GreenCircle());

    red_circle->draw();
    green_circle->draw();

    delete red_circle;
    delete green_circle;

    return 0;
}