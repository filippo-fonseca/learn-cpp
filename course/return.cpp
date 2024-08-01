#include <ctime>
#include <iomanip>
#include <iostream>

double square(double length);

int main() {
    double length = 5.0;
    double area = square(length);

    std::cout << "Area: " << area << "cm^2" << std::endl;

    return 0;
}

double square(double length) {
    double result = length * length;
    return result;
}
