#include "circle.h"

Circle::Circle() {
    Shape::type = "Circle";
}

Shape *Circle::clone() {
    return new Circle();
}

void Circle::draw() {
    std::cout << "Inside Circle::draw() method." << std::endl;
}