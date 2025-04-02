#ifndef NOTIFIER_HPP
# define NOTIFIER_HPP

#include <string>

class Notifier {
public:
    void sendEmailNotification(const std::string& userName, const std::string& message);
    void sendTextNotification(const std::string& userName, const std::string& message);
};

#endif
