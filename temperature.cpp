#include <iostream>
int main(){
    double celsius;
    double fah;
    /*std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;
    fah=(celsius * 1.8) + 32;
    std::cout << "Temperature in Fahrenheit: " << fah << '\n';*/
    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> fah;
    celsius=(fah - 32) / 1.8;
    std::cout << "Temperature in Celsius: " << celsius << '\n'; 
}