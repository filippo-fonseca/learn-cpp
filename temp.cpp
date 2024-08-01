#include <iostream>
#include <cmath>

int main() {
    double temp;
    char unit;
    char fahrenheitUnit = 'F';
    char celsiusUnit = 'C';

    std::cout << "**** Temperature Converter ****\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to (" << fahrenheitUnit << "/" << celsiusUnit << ")? ";
    std::cin >> unit;

     unit = std::toupper(unit);

     if (unit == fahrenheitUnit) {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "The temperature in Fahrenheit is: " << temp << std::endl;
     } else if (unit == celsiusUnit) {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8;
        std::cout << "The temperature in Celsius is: " << temp << std::endl;
     } else {
        std::cout << "Invalid unit. Please enter F or C." << std::endl;
     }



    std::cout << "*************";
}