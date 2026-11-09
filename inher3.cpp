#include <iostream>
using namespace std;
class Base{
    public :
    int x;
    Base(){
        cout << "Base Class used"<< endl;
    }
};
class Derived : public Base{
    public :
    int y;
    Derived(){
        cout << "Derived class used" << endl;
    }
    void setvalue(int i,int j){
        y=i;
        x=j;
    }
    void printval(void){
        cout << y<<"  "<< x<<"  ";
    }
};
int main(){
    Base *bp= new Derived;
    Derived *dp;
    Derived d ;
    dp=&d;
    dp->setvalue(10,20);
    dp->printval();
    return 0;
}