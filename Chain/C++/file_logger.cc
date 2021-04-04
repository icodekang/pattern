#include "file_logger.h"

FileLogger::FileLogger(int level)
{
    this->level = level;
}

void FileLogger::write(std::string message)
{
    std::cout << "file::message: " << message << std::endl;
}