#ifndef _ORDER_H_
#define _ORDER_H_

#include <iostream>

class Order
{
public:
    Order() = default;
    virtual void execute() = 0;
    virtual ~Order() = default;
};

#endif /* _ORDER_H_ */