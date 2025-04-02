#include "SimpleLogFormatter.hpp"

std::string SimpleLogFormatter::format(const std::string& message)  {
    return "[LOG]: " + message;
}