#include "shape_cache.h"

int main()
{
    ShapeCache::load_cache();

    Shape *shape1 = ShapeCache::get_shape("1");
    std::cout << "shape: " << shape1->get_type() << std::endl;;

    Shape *shape2 = ShapeCache::get_shape("2");
    std::cout << "shape: " << shape2->get_type() << std::endl;

    Shape *shape3 = ShapeCache::get_shape("3");
    std::cout << "shape: " << shape3->get_type() << std::endl;
    return 0;
}