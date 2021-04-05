#ifndef _EXPRESSION_H_
#define _EXPRESSION_H_

#include <iostream>

class Expression
{
public:
    Expression() = default;
    virtual bool interpret(std::string context) = 0;
    virtual ~Expression() = default;
};

#endif /* _EXPRESSION_H_ */