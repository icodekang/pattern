#ifndef _CONSOLE_LOGGER_H_
#define _CONSOLE_LOGGER_H_

#include "abstract_logger.h"

class ConsoleLogger: public AbstractLogger
{
public:
    ConsoleLogger(int level);
    virtual void write(std::string message);
    ~ConsoleLogger() = default;
};

#endif /* _CONSOLE_LOGGER_H_ */