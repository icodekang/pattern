#include "and_expression.h"

AndExpression::AndExpression(Expression *expr1, Expression *expr2): expr1(expr1), expr2(expr2)
{

}

bool AndExpression::interpret(std::string context)
{
    return expr1->interpret(context) && expr2->interpret(context);
}

AndExpression::~AndExpression()
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