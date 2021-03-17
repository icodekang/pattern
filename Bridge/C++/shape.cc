#include "shape.h"

Shape::Shape(DrawApi *draw_api)
{
    this->draw_api = draw_api;
}

void Shape::draw()
{

}

Shape::~Shape()
{
    if (draw_api) {
        delete draw_api;
        draw_api = nullptr;
    }
}