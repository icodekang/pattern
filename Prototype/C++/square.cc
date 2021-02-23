#include "square.h"

Square::Square() {
    Shape::type = "Square";
}

Shape *Square::clone() {
    return new Square(*this);
}

void Square::draw() {
    std::cout << "Inside Square::draw() method." << std::endl;
}