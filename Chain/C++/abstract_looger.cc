#include "abstract_logger.h"

int AbstractLogger::INFO = 1;
int AbstractLogger::DEBUG = 2;
int AbstractLogger::ERROR = 3;

void AbstractLogger::set_next_logger(AbstractLogger *next_logger)
{
    this->next_logger = next_logger;
}

void AbstractLogger::log_message(int level, std::string message)
{
    if (this->level <= level) {
        write(message);
    }
    if (next_logger != nullptr) {
        next_logger->log_message(level, message);
    }
}

void AbstractLogger::write(std::string message)
{

}

AbstractLogger::~AbstractLogger()
{
    if (next_logger) {
        delete next_logger;
        next_logger = nullptr;
    }
}