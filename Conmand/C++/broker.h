#ifndef _BROKER_H_
#define _BROKER_H_

#include <list>

#include "order.h"

class Broker
{
private:
    std::list<Order*> order_list;

public:
    Broker() = default;
    void take_order(Order *order);
    void place_order();
    ~Broker();
};

#endif /* _BROKER_H_ */