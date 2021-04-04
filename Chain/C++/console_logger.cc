#include "console_logger.h"

ConsoleLogger::ConsoleLogger(int level)
{
    this->level = level;
}

void ConsoleLogger::write(std::string message)
{
    std::cout << "standard console::logger: " << message << std::endl;
}