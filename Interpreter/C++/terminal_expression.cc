#include "terminal_expression.h"

TerminalExpression::TerminalExpression(std::string data): data(data)
{

}

bool TerminalExpression::interpret(std::string context)
{
    if (context.find(data) != std::string::npos) {
        return true;
    }
    return false;
}