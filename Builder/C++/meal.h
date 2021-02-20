#ifndef _MEAL_H_
#define _MEAL_H_

#include <list>
#include "item.h"

class Meal
{
private:
    std::list<Item*> items;

public:
    Meal() = default;
    void add_item(Item *item);
    float get_cost();
    void show_items();
    ~Meal() = default;
};

#endif /* _MEAL_H_ */ 