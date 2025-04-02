#ifndef USER_HPP
# define USER_HPP

#include <string>
#include "Logger.hpp"
#include "Authenticator.hpp"
#include "Notifier.hpp"

class User {
private:
    std::string name;
    std::string password;
    Logger logger;
    Authenticator authenticator;
    Notifier notifier;

public:
    User(const std::string& name, const std::string& password);
    bool authenticate(const std::string& enteredPassword);
    void updatePassword(const std::string& newPassword);
    void sendNotification(const std::string& message);
    void displayInfo();
};

#endif
