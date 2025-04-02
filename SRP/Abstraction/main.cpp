#include "FileLogger.hpp"
#include "ConsoleLogger.hpp"
#include "LogFormatter.hpp"
#include "SimpleLogFormatter.hpp"

int main() {
    LogFormatter* formatter = new SimpleLogFormatter();

    Logger* consoleLogger = new ConsoleLogger();
    consoleLogger->setFormatter(formatter);
    consoleLogger->log("This is a log message to the console.");

    Logger* fileLogger = new FileLogger("log.txt");
    fileLogger->setFormatter(formatter);
    fileLogger->log("This is a log message to the file.");
    
    delete formatter;
    delete consoleLogger;
    delete fileLogger;
    
    return 0;
}
