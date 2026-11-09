#include <iostream>
using namespace std;
class B;
class A{
    private:
        int gamma;
    public:
        int x,y;
    friend B;
};
class B{
    public:
        A e;
        void show(){
            e.x=10;
            e.y=20;
            e.gamma=90;
            cout<<e.x<<" "<<e.y<<" "<<e.gamma<<" ";
        }
};
int main(){
    B b;
    b.show();
    return 0;
}