#include "terminal_expression.h"
#include "or_expression.h"
#include "and_expression.h"

static Expression *get_male_expression()
{
    Expression *robert = new TerminalExpression("robert");
    Expression *john = new TerminalExpression("john");
    return new OrExpression(robert, john);
}

static Expression *get_married_woman_expression()
{
    Expression *julie = new TerminalExpression("julie");
    Expression *married = new TerminalExpression("married");
    return new AndExpression(julie, married);
}

int main()
{
    Expression *is_male = get_male_expression();
    Expression *is_married_woman = get_married_woman_expression();

    std::cout << "john is male? " << is_male->interpret("john") << std::endl;
    std::cout << "julie is a married women? " << is_married_woman->interpret("married julie") << std::endl;

    return 0;
}