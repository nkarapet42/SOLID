#include "FileLogger.hpp"
#include <iostream>

FileLogger::FileLogger(const std::string& filename) {
    logFile.open(filename, std::ios::out | std::ios::app);
    if (!logFile) {
        std::cerr << "Error opening file!" << std::endl;
    }
}

FileLogger::~FileLogger() {
    if (logFile.is_open()) {
        logFile.close();
    }
}

void FileLogger::log(const std::string& message) {
    if (formatter) {
        logFile << formatter->format(message) << std::endl;
    } else {
        logFile << message << std::endl;
    }
}

void FileLogger::setFormatter(LogFormatter* formatter) {
    this->formatter = formatter;
}
