#ifndef _PEPSI_H_
#define _PEPSI_H_

#include "cold_drink.h"

class Pepsi: public ColdDrink
{
public:
    Pepsi() = default;
    virtual float price();
    virtual std::string name();
    ~Pepsi() = default;
};

#endif /* _PEPSI_H_ */