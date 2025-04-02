#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <string>
#include <iostream>
#include <fstream>

class Logger {
public:
    void logInfo(const std::string& message);
    void logError(const std::string& message);
    void logToFile(const std::string& message);
};

#endif