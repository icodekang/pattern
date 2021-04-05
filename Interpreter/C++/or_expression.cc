#include "or_expression.h"

OrExpression::OrExpression(Expression *expr1, Expression *expr2): expr1(expr1), expr2(expr2)
{

}

bool OrExpression::interpret(std::string context)
{
    return expr1->interpret(context) || expr2->interpret(context);
}

OrExpression::~OrExpression()
{
    if (expr1) {
        delete expr1;
        expr1 = nullptr;
    }
    if (expr2) {
        delete expr2;
        expr2 = nullptr;
    }
}