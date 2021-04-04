#include "console_logger.h"
#include "error_logger.h"
#include "file_logger.h"

static AbstractLogger *get_chain_loggers()
{
    AbstractLogger *error_logger = new ErrorLogger(AbstractLogger::ERROR);
    AbstractLogger *file_logger = new FileLogger(AbstractLogger::DEBUG);
    AbstractLogger *console_logger = new ConsoleLogger(AbstractLogger::INFO);

    error_logger->set_next_logger(file_logger);
    file_logger->set_next_logger(console_logger);

    return error_logger;
}

int main()
{
    AbstractLogger *logger = get_chain_loggers();

    logger->log_message(AbstractLogger::INFO, "this is an information.");

    logger->log_message(AbstractLogger::DEBUG, "this is a debug level information.");

    logger->log_message(AbstractLogger::ERROR, "this is an error information.");

    return 0;
}