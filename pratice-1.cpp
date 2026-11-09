#include <iostream>
#include <cmath>
int main(){
    double a, b, c;
    std::cout << "Enter the value of a : ";
    std::cin >> a;
    std::cout << "Enter the value of b : "; 
    std::cin>> b;
    a=pow(a,2);
    b=pow(b,2);
    c=sqrt(a+b);
    std::cout << "The value of c is : " << c << '\n';
    return 0;
}