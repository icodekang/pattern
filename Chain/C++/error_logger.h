#ifndef _ERROR_LOGGER_H_
#define _ERROR_LOGGER_H_

#include "abstract_logger.h"

class ErrorLogger: public AbstractLogger
{
public:
    ErrorLogger(int level);
    void write(std::string message);
    ~ErrorLogger() = default;
};

#endif /* _ERROR_LOGGER_H_ */