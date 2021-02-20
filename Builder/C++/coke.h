#ifndef _COKE_H_
#define _COKE_H_

#include "cold_drink.h"

class Coke: public ColdDrink
{
public:
    Coke() = default;
    virtual float price();
    virtual std::string name();
    ~Coke() = default;
};

#endif /* _COKE_H_ */