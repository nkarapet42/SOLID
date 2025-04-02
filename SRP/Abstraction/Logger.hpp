#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>

class LogFormatter;

class Logger {
public:
    virtual ~Logger() {}
    virtual void log(const std::string& message) = 0;
    virtual void setFormatter(LogFormatter* formatter) = 0;
};

#endif
