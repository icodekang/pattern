#ifndef _SELL_STOCK_H_
#define _SELL_STOCK_H_

#include "stock.h"
#include "order.h"

class SellStock: public Order
{
private:
    Stock *abc_stock;

public:
    SellStock(Stock *abc_stock);
    virtual void execute();
    ~SellStock();
};

#endif /* _SELL_STOCK_H_ */