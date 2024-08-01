#include <iostream>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.length() > 12) {
        std::cout << "Your name is too long." << std::endl;
    } else {
        std::cout << "Hello " << name << "!" << std::endl;
    }

    return 0;
}