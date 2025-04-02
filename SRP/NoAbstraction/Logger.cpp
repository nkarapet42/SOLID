#include "Logger.hpp"

void Logger::logInfo(const std::string& message) {
    std::cout << "INFO: " << message << std::endl;
    logToFile("INFO: " + message);
}

void Logger::logError(const std::string& message) {
    std::cerr << "ERROR: " << message << std::endl;
    logToFile("ERROR: " + message);
}

void Logger::logToFile(const std::string& message) {
    std::ofstream logFile("app_log.txt", std::ios::app);
    if (logFile.is_open()) {
        logFile << message << std::endl;
        logFile.close();
    }
}
