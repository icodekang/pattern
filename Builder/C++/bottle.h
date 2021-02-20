#ifndef _BOTTLE_H_
#define _BOTTLE_H_

#include "packing.h"

class Bottle: public Packing
{
public:
    Bottle() = default;
    virtual std::string pack();
    ~Bottle() = default;
};

#endif /* _BOTTLE_H_ */