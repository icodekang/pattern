#include "sell_stock.h"

SellStock::SellStock(Stock *abc_stock): abc_stock(abc_stock)
{

}

void SellStock::execute()
{
    abc_stock->sell();
}

SellStock::~SellStock()
{
    if (abc_stock) {
        delete abc_stock;
        abc_stock = nullptr;
    }
}