#include "Notifier.hpp"
#include <iostream>

void Notifier::sendEmailNotification(const std::string& userName, const std::string& message) {
    std::cout << "Sending email to " << userName << ": " << message << std::endl;
}

void Notifier::sendTextNotification(const std::string& userName, const std::string& message) {
    std::cout << "Sending text to " << userName << ": " << message << std::endl;
}
