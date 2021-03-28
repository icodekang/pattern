#ifndef _SHAPE_FACTORY_H_
#define _SHAPE_FACTORY_H_

#include <map>
#include "circle.h"

class ShapeFactory
{
private:
    static std::map<std::string, Shape*> circle_map;

public:
    ShapeFactory() = default;
    static Shape *get_circle(std::string color);
    ~ShapeFactory() = default;
};

#endif /* _SHAPE_FACTORY_H_ */