#ifndef _SHAPE_FACTORY_H_
#define _SHAPE_FACTORY_H_

#include "circle.h"
#include "rectangle.h"
#include "square.h"

class ShapeFactory
{
public:
    ShapeFactory() = default;
    Shape *get_shape(std::string shape_type);
    ~ShapeFactory() = default;
};

#endif /* _SHAPE_FACTORY_H_ */