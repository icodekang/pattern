#include "circle.h"

Circle::Circle(std::string color): color(color)
{

}

void Circle::setx(int x)
{
    this->x = x;
}

void Circle::sety(int y)
{
    this->y = y;
}

void Circle::set_radius(int radius)
{
    this->radius = radius;
}

void Circle::draw()
{
    std::cout << "circle::draw() [color : "
              << color << ", x: " << x << ", y: " << y
              << ", radius: " << radius << std::endl;
}