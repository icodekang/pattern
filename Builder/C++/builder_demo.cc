#include "meal_builder.h"

int main()
{
    MealBuilder meal_build;

    Meal *veg_meal = meal_build.prepare_vegmeal();
    veg_meal->show_items();
    std::cout << "Total Cost: " << veg_meal->get_cost() << std::endl;

    std::cout << "--------------------------" << std::endl;

    Meal *non_veg_meal = meal_build.prepare_nonvegmeal();
    non_veg_meal->show_items();
    std::cout << "Total Cost: " << non_veg_meal->get_cost() << std::endl;
}