#include "Authenticator.hpp"

bool Authenticator::authenticate(const std::string& enteredPassword, const std::string& actualPassword) {
    return enteredPassword == actualPassword;
}
