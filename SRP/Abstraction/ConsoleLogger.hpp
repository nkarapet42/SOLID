#ifndef CONSOLELOGGER_HPP
# define CONSOLELOGGER_HPP

#include "Logger.hpp"
#include "LogFormatter.hpp"
#include <iostream>

class ConsoleLogger : public Logger {
private:
    LogFormatter* formatter;
public:
    ConsoleLogger();
    void log(const std::string& message) override;
    void setFormatter(LogFormatter* formatter) override;
};

#endif
