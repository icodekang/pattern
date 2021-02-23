#include "rectangle.h"

Rectangle::Rectangle() {
    Shape::type = "Rectangle";
}

Shape *Rectangle::clone() {
    return new Rectangle(*this);
}

void Rectangle::draw() {
    std::cout << "Inside Rectangle::draw() method." << std::endl;
}