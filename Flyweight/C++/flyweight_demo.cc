#include "shape_factory.h"

static std::string colors[] = {
    "red",
    "green",
    "blue",
    "white",
    "black"
};

static std::string get_random_color()
{
    return colors[(int)(rand() % 5)];
}

static int get_random_x()
{
    return (int)(rand() % 100);
}

static int get_random_y()
{
    return (int)(rand() % 100);
}

int main()
{
    for (int i = 0; i < 20; i++) {
        Circle *circle = (Circle *)ShapeFactory::get_circle(get_random_color());
        circle->setx(get_random_x());
        circle->sety(get_random_y());
        circle->set_radius(100);
        circle->draw();
    }
    return 0;
}