#ifndef _COLOR_FACTORY_H_
#define _COLOR_FACTORY_H_

#include "abstract_factory.h"

class ColorFactory: public AbstractFactory
{
public:
    ColorFactory() = default;
    virtual Shape *get_shape(std::string shape);
    virtual Color *get_color(std::string color);
    virtual ~ColorFactory() = default;
};

#endif /* _COLOR_FACTORY_H_ */