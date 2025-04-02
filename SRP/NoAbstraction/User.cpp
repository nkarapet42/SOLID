#include "User.hpp"

User::User(const std::string& name, const std::string& password)
    : name(name), password(password) {}

bool User::authenticate(const std::string& enteredPassword) {
    if (authenticator.authenticate(enteredPassword, password)) {
        logger.logInfo("User authenticated: " + name);
        return true;
    } else {
        logger.logError("Authentication failed for user: " + name);
        return false;
    }
}

void User::updatePassword(const std::string& newPassword) {
    password = newPassword;
    logger.logInfo("Password updated for user: " + name);
}

void User::sendNotification(const std::string& message) {
    notifier.sendEmailNotification(name, message);
    logger.logInfo("Notification sent to: " + name);
}

void User::displayInfo() {
    logger.logInfo("Displaying info for user: " + name);
}
