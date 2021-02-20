#include "meal.h"

void Meal::add_item(Item *item) {
    items.push_back(item);
}

float Meal::get_cost() {
    float cost = 0.0f;
    for (Item *item: items) {
        cost += item->price();
    }
    return cost;
}

void Meal::show_items() {
    for (Item *item: items) {
        std::cout << "Item: " << item->name();
        std::cout << ", Packing: " << item->packing()->pack();
        std::cout << ", Price: " << item->price() << std::endl;
    }
}