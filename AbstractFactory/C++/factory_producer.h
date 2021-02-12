#ifndef _FACTORY_PRODUCER_H_
#define _FACTORY_PRODUCER_H_

#include "shape_factory.h"
#include "color_factory.h"

class FactoryProducer
{
public:
    FactoryProducer() = default;
    static AbstractFactory *get_factory(std::string choice);
    ~FactoryProducer() = default;
};

#endif /* _FACTORY_PRODUCER_H_ */