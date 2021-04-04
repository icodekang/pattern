#include "buy_stock.h"

BuyStock::BuyStock(Stock *abc_stock): abc_stock(abc_stock)
{

}

void BuyStock::execute()
{
    abc_stock->buy();
}

BuyStock::~BuyStock()
{
    if (abc_stock) {
        delete abc_stock;
        abc_stock = nullptr;
    }
}