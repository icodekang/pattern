#include "broker.h"
#include "buy_stock.h"
#include "sell_stock.h"

int main()
{
    Stock *abc_stock = new Stock();

    BuyStock *buy_stock_order = new BuyStock(abc_stock);
    SellStock *sell_stock_order = new SellStock(abc_stock);

    Broker *broker = new Broker();
    broker->take_order(buy_stock_order);
    broker->take_order(sell_stock_order);

    broker->place_order();

    return 0;
}