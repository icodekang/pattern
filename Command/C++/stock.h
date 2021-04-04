#ifndef _STOCK_H_
#define _STOCK_H_

#include <iostream>

class Stock
{
private:
    std::string name;
    int quantity;

public:
    Stock();
    void buy();
    void sell();
    ~Stock() = default;
};

#endif /* _STOCK_H_ */