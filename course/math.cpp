#include <iostream>
#include <cmath>

double promptUserForNumber(std::string prompt) {
    double number;
    std::cout << prompt;
    std::cin >> number;

    if (number < 0) {
        std::cout << "Please enter positive numbers." << std::endl;
        promptUserForNumber(prompt + " (positive numbers only): ");
    }
    return number;
}


int main() {
   double a;
   double b;
   double c;

   a = promptUserForNumber("Enter a: ");
   b = promptUserForNumber("Enter b: ");

   a = pow(a, 2);
   b = pow(b, 2);
   c = sqrt(a + b);

    std::cout << "The hypotenuse is: " << c << std::endl;


    return 0;
}