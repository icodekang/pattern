#ifndef _WRAPPER_H_
#define _WRAPPER_H_

#include "packing.h"

class Wrapper: public Packing
{
public:
    Wrapper() = default;
    virtual std::string pack();
    ~Wrapper() = default;
};

#endif /* _WRAPPER_H_ */