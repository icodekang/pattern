#ifndef _ABSTRACT_FACTORY_H_
#define _ABSTRACT_FACTORY_H_

#include "circle.h"
#include "rectangle.h"
#include "square.h"
#include "red.h"
#include "green.h"
#include "blue.h"

class AbstractFactory
{
public:
    AbstractFactory() = default;
    virtual Color *get_color(std::string color) = 0;
    virtual Shape *get_shape(std::string shape) = 0;
    virtual ~AbstractFactory() = default;
};

#endif /* _ABSTRACT_FACTORY_H_ */