#ifndef _SHAPE_FACTORY_H_
#define _SHAPE_FACTORY_H_

#include "abstract_factory.h"

class ShapeFactory: public AbstractFactory
{
public:
    ShapeFactory() = default;
    virtual Shape *get_shape(std::string shape);
    virtual Color *get_color(std::string color);
    virtual ~ShapeFactory() = default;
};

#endif /* _SHAPE_FACTORY_H_ */