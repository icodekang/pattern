#include "circle.h"

Circle::Circle() {
    Shape::type = "Circle";
}

Shape *Circle::clone() {
    return new Circle(*this);
}

void Circle::draw() {
    std::cout << "Inside Circle::draw() method." << std::endl;
}