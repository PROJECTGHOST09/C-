#include <iostream>
using namespace std;
class Base{
    protected:
        int data1,data2;
    public:
        Base(int a=0,int b=0): data1(a),data2(b)
        {

        }
};
class Derived : public Base{
    public:
    void show(){
        cout<<"Data 1 = "<<data1<<"\t"<<"Data 2 = "<<data2<<"\t";
    }
};
int main(){
    Derived d;
    d.show();
    return 0;
}