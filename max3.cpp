#include <iostream>
int maximum(int a,int b,int c){
    int max=a;
    if(b>max && b>c){
        max=b;
    }
    else if(c>max){
        max=c;
    }
    return max;
}
int main(){


    std::cout << "Enter the first number: ";
    int a; 
    std::cin>>a;
    std::cout << "Enter the second number: ";
    int b;
    std::cin>>b;
    std::cout << "Enter the third number: "; 
    int c;   
    std::cin>>c;
    std::cout<<"The maximum number of the three is : "<< maximum(a,b,c) << std::endl;

    return 0;
}