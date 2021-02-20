#ifndef _PACKING_H_
#define _PACKING_H_

#include <iostream>

class Packing
{
public:
    Packing() = default;
    virtual std::string pack() = 0;
    virtual ~Packing() = default;
};

#endif /* _PACKING_H_ */