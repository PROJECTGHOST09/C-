#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    int b;
    int result;
    int operation;
    std::cout <<"Calulator \n";
    while (operation <= 5){
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Exit\n";
    std::cin >> operation;
    switch (operation)
    {
        case 1:
            std::cout << "Enter the first number: ";
            std::cin >> a;
            std::cout << "Enter the second number: ";
            std::cin >> b;
            result = a + b;
            std::cout << "Result of addition: " << result << '\n';
            break;  
        case 2:
            std::cout << "Enter the first number: ";           
            std::cin >> a;
            std::cout << "Enter the second number: ";
            std::cin >> b;
            result = a - b;
            std::cout << "Result of subtraction: " << result << '\n';
            break;
        case 3:
            std::cout << "Enter the first number: ";
            std::cin >> a;
            std::cout << "Enter the second number: ";
            std::cin >> b;
            result = a * b;
            std::cout << "Result of multiplication: " << result << '\n';
            break;
        case 4:
            std::cout << "Enter the first number: ";
            std::cin >> a;
            std::cout << "Enter the second number: ";
            std::cin >> b;
            if (b != 0) {
                result = a / b;
                std::cout << "Result of division: " << result << '\n';
            } else {
                std::cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        case 5:
             cout<<"Thank you for using the calculator\n";
             break;

        default:
            std::cout << "Invalid operation selected.\n";
            break;
    }

    }
    return 0;
}