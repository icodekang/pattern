#ifndef _OR_EXPRESSION_H_
#define _OR_EXPRESSION_H_

#include "expression.h"

class OrExpression: public Expression
{
private:
    Expression *expr1;
    Expression *expr2;

public:
    OrExpression(Expression *expr1, Expression *expr2);
    virtual bool interpret(std::string context);
    virtual ~OrExpression();
};

#endif /* _OR_EXPRESSION_H_ */