#include <ctime>
#include <iomanip>
#include <iostream>

void happyBirthday(std::string name);

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    happyBirthday(name);

    return 0;
}

void happyBirthday(std::string name) {
    std::time_t now = std::time(0);
    std::tm localTime = *std::localtime(&now);

    std::cout << "Happy Birthday " << name << "!" << std::endl;
    std::cout << "Today is "
              << std::put_time(&localTime, "%Y-%m-%d") << " at " << std::put_time(&localTime, "%H:%M:%S") << std::endl;
}
