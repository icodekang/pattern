#ifndef _ITEM_H_
#define _ITEM_H_

#include <iostream>
#include "packing.h"

class Item
{
public:
    Item() = default;
    virtual std::string name() = 0;
    virtual Packing *packing() = 0;
    virtual float price() = 0;
    virtual ~Item() = default;
};

#endif /* _ITEM_H_ */ 