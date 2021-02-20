#ifndef _CHICKEN_BURGER_H_
#define _CHICKEN_BURGER_H_

#include "cold_drink.h"

class ChickenBurger: public ColdDrink
{
public:
    ChickenBurger() = default;
    virtual float price();
    virtual std::string name();
    ~ChickenBurger() = default;
};

#endif /* _CHICKEN_BURGER_H_ */