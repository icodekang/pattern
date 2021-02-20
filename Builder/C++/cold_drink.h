#ifndef _COLD_DRINK_H_
#define _COLD_DRINK_H_

#include "item.h"
#include "bottle.h"

class ColdDrink: public Item
{
public:
    ColdDrink() = default;
    virtual Packing *packing();
    virtual float price() = 0;
    virtual std::string name() = 0;
    ~ColdDrink() = default;
};

#endif /* _COLD_DRINK_H_ */