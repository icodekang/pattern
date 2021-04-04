#ifndef _FILE_LOGGER_H_
#define _FILE_LOGGER_H_

#include "abstract_logger.h"

class FileLogger: public AbstractLogger
{
public:
    FileLogger(int level);
    void write(std::string message);
    ~FileLogger() = default;
};

#endif /* _FILE_LOGGER_H_ */