#include "User.hpp"
#include <iostream>

int main() {
    User user("Alice", "password123");

    user.displayInfo();

    if (user.authenticate("password123")) {
        std::cout << "User authenticated successfully!" << std::endl;
    } else {
        std::cout << "Authentication failed!" << std::endl;
    }

    user.sendNotification("Welcome to the system!");

    user.updatePassword("newPassword456");

    return 0;
}
