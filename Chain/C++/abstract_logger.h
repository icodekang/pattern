#ifndef _ABSTRACT_LOGGER_H_
#define _ABSTRACT_LOGGER_H_

#include <iostream>

class AbstractLogger
{
protected:
    int level;
    AbstractLogger *next_logger;

public:
    static int INFO;
    static int DEBUG;
    static int ERROR;

public:
    AbstractLogger() = default;
    void set_next_logger(AbstractLogger *next_logger);
    void log_message(int level, std::string message);
    virtual void write(std::string message);
    virtual ~AbstractLogger();
};

#endif /* _ABSTRACT_LOGGER_H_ */