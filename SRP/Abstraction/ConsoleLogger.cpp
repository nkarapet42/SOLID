#include "ConsoleLogger.hpp"

ConsoleLogger::ConsoleLogger() : formatter(nullptr) {}

void ConsoleLogger::log(const std::string& message) {
    if (formatter) {
        std::cout << formatter->format(message) << std::endl;
    } else {
        std::cout << message << std::endl;
    }
}

void ConsoleLogger::setFormatter(LogFormatter* formatter) {
    this->formatter = formatter;
}
