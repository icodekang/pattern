#ifndef _TERMINAL_EXPRESSION_H_
#define _TERMINAL_EXPRESSION_H_

#include "expression.h"

class TerminalExpression: public Expression
{
private:
    std::string data;

public:
    TerminalExpression(std::string data);
    virtual bool interpret(std::string context);
    virtual ~TerminalExpression() = default;
};

#endif /* _TERMINAL_EXPRESSION_H_ */