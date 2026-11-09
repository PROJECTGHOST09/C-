#include <iostream>
#include <ctime>
int main(){
    int guess;
    int tries=0;
    srand(time(NULL));
    int num=(rand() % 100) + 1;
    

    do{
        std::cout << "Enter the number between 1 to 100: ";
        std::cin >> guess;
        tries++;
        if (num < guess){
            std::cout<<"enter a lower number\n";

        }
        else if (num > guess){
            std::cout<<"enter a higher number\n";
        }
        else{
            std::cout<<"you guessed the number in "<<tries<<" tries\n";
        }
    }while(num!=guess);
    return 0;
}