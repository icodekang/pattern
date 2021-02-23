#include "shape.h"

std::string Shape::get_type() {
    return type;
}

std::string Shape::get_id() {
    return id;
}

void Shape::set_id(std::string id) {
    this->id = id;
}