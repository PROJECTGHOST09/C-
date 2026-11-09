#include <iostream>
using  namespace std;
class Base{
    public:
       virtual void outpt(){
            cout<<"Base Function "<<endl;
        }
};
class Derived : public Base{
    public:
        virtual void outpt(){
            cout<<"Derived Function"<<endl;
        }
};
class Newclass : public Base{
    public:
        void outpt(){
            cout<<"New Derived Function"<<endl;
        }
};
int main(){
    Derived d;
    Base *b;
    b=&d;
    b->outpt();
    Newclass x;
    b=&x;
    b->outpt();
    return 0;
}