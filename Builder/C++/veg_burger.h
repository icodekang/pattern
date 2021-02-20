#ifndef _VEG_BURGER_H_
#define _VEG_BURGER_H_

#include "burger.h"

class VegBurger: public Burger
{
public:
    VegBurger() = default;
    virtual float price();
    virtual std::string name();
    ~VegBurger() = default;
};

#endif /* _VEG_BURGER_H_ */