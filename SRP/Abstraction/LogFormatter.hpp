#ifndef LOGFORMATTER_HPP
# define LOGFORMATTER_HPP

#include <string>

class LogFormatter {
public:
    virtual ~LogFormatter() {}
    virtual std::string format(const std::string& message) = 0;
};

#endif
