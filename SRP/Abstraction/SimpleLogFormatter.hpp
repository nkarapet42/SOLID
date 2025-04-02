#ifndef SIMPLELOGFORMATTER_HPP
# define SIMPLELOGFORMATTER_HPP

#include "LogFormatter.hpp"

class SimpleLogFormatter : public LogFormatter {
    public:
        std::string format(const std::string& message) override;
};
    
#endif