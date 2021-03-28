#include "shape_maker.h"

ShapeMaker::ShapeMaker()
{
    circle = new Circle();
    square = new Square();
    rectangle = new Rectangle();
}

void ShapeMaker::draw_circle()
{
    circle->draw();
}

void ShapeMaker::draw_square()
{
    square->draw();
}

void ShapeMaker::draw_rectangle()
{
    rectangle->draw();
}

ShapeMaker::~ShapeMaker()
{
    if (circle) {
        delete circle;
        circle = nullptr;
    }
    if (square) {
        delete square;
        square = nullptr;
    }
    if (rectangle) {
        delete rectangle;
        rectangle = nullptr;
    }
}