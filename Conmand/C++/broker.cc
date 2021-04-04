#include "broker.h"

void Broker::take_order(Order *order)
{
    order_list.push_back(order);
}

void Broker::place_order()
{
    for (Order *order: order_list) {
        order->execute();
    }
    order_list.clear();
}

Broker::~Broker()
{
    for (Order *order: order_list) {
        if (order) {
            delete order;
            order = nullptr;
        }
    }
}