#include <iostream>
unsigned long long fact(int n);
int main(){

    std::cout<< "Enter a number to calculate its factorial: ";
    int input;
    std::cin >> input;
    std::cout << "The factorial of " << input << " is: " << fact(input) << std::endl;
    return 0;
}
unsigned long long fact(int n){
    if (n == 0 )
        return 1;

    else if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

// since using unsigned long long, the maximum value of n is 20, as 21! exceeds the maximum value of unsigned long long.