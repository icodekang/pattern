#ifndef _BURGER_H_
#define _BURGER_H_

#include "item.h"
#include "wrapper.h"

class Burger: public Item
{
public:
    Burger() = default;
    virtual Packing *packing();
    virtual float price() = 0;
    virtual std::string name() = 0;
    ~Burger() = default;
};

#endif /* _BURGER_H_ */