#include "meal_builder.h"

Meal *MealBuilder::prepare_vegmeal() {
    Meal *meal = new Meal();
    meal->add_item(new VegBurger());
    meal->add_item(new Coke());
    return meal;
}

Meal *MealBuilder::prepare_nonvegmeal() {
    Meal *meal = new Meal();
    meal->add_item(new ChickenBurger());
    meal->add_item(new Pepsi());
    return meal;
}