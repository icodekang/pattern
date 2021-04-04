#ifndef _BUY_STOCK_H_
#define _BUY_STOCK_H_

#include "stock.h"
#include "order.h"

class BuyStock: public Order
{
private:
    Stock *abc_stock;

public:
    BuyStock(Stock *abc_stock);
    virtual void execute();
    ~BuyStock();
};

#endif /* _BUY_STOCK_H_ */