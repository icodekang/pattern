#include "red_shape_decorator.h"

int main()
{
    Shape *circle = new Circle();
    ShapeDecorator *red_circle = new RedShapeDecorator(new Circle());
    ShapeDecorator *red_rectangle = new RedShapeDecorator(new Rectangle());
    std::cout << "circle with normal border" << std::endl;
    circle->draw();

    std::cout << "circle of red border" << std::endl;
    red_circle->draw();

    std::cout << "rectangle of red border" << std::endl;
    red_rectangle->draw();

    if (circle) {
        delete circle;
        circle = nullptr;
    }
    if (red_circle) {
        delete red_circle;
        red_circle = nullptr;
    }
    if (red_rectangle) {
        delete red_rectangle;
        red_rectangle = nullptr;
    }

    return 0;
}