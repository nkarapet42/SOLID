#ifndef FILELOGGER_HPP
# define FILELOGGER_HPP

#include "Logger.hpp"
#include "LogFormatter.hpp"
#include <fstream>

class FileLogger : public Logger {
private:
    LogFormatter* formatter;
    std::ofstream logFile;
public:
    FileLogger(const std::string& filename);
    ~FileLogger();
    void log(const std::string& message) override;
    void setFormatter(LogFormatter* formatter) override;
};

#endif
