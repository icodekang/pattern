#include "stock.h"

Stock::Stock()
{
    this->name = "ABC";
    this->quantity = 10;
}

void Stock::buy()
{
    std::cout << "stock [ name: " << name << ", quantity: " << quantity << " ] bought" << std::endl; 
}

void Stock::sell()
{
    std::cout << "stock [ name: " << name << ", quantity: " << quantity << " ] sold" << std::endl;  
}