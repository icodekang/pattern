#ifndef _AND_EXPRESSION_H_
#define _AND_EXPRESSION_H_

#include "expression.h"

class AndExpression: public Expression
{
private:
    Expression *expr1;
    Expression *expr2;

public:
    AndExpression(Expression *expr1, Expression *expr2);
    virtual bool interpret(std::string context);
    virtual ~AndExpression();
};

#endif /* _AND_EXPRESSION_H_ */