#include <iostream>
using namespace std;
class A{
    public:
        A(){
            cout<<"Constructor is created for the class 'A'"<<endl;
        }
        ~A(){
            cout<<"Destructor for the class 'A'."<<endl;
        }
};
int main(){
    A a;
    return 0;
}