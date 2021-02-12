#include "factory_producer.h"

AbstractFactory *FactoryProducer::get_factory(std::string choice)
{
    if (!choice.compare("shape")) {
        return new ShapeFactory();
    } else if (!choice.compare("color")) {
        return new ColorFactory();
    }

    return nullptr;
}