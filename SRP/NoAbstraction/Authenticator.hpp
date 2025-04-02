#ifndef AUTHENTICATOR_HPP
# define AUTHENTICATOR_HPP

#include <string>

class Authenticator {
public:
    bool authenticate(const std::string& enteredPassword, const std::string& actualPassword);
};

#endif