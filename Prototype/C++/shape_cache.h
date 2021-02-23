#ifndef _SHAPE_CACHE_H_
#define _SHAPE_CACHE_H_

#include <map>
#include "circle.h"
#include "square.h"
#include "rectangle.h"

class ShapeCache
{
private:
    static std::map<std::string, Shape*> shape_map;

public:
    ShapeCache() = default;
    static Shape *get_shape(std::string shape_id);
    static void load_cache();
    ~ShapeCache() = default;
};

#endif /* _SHAPE_CACHE_H_ */