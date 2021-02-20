#ifndef _MEAL_BUILDER_H_
#define _MEAL_BUILDER_H_

#include "meal.h"
#include "veg_burger.h"
#include "coke.h"
#include "chicken_burger.h"
#include "pepsi.h"

class MealBuilder
{
public:
    MealBuilder() = default;
    Meal *prepare_vegmeal();
    Meal *prepare_nonvegmeal();
    ~MealBuilder() = default;
};

#endif /* _MEAL_BUILDER_H_ */