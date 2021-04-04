#include "error_logger.h"

ErrorLogger::ErrorLogger(int level)
{
    this->level = level;
}

void ErrorLogger::write(std::string message)
{
    std::cout << "error console::logger " << message << std::endl;
}