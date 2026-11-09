#include <iostream>
using namespace std;
class Parent{
    private : 
    int o=10;
    public:
    int x,y;
    protected:
    int w;
    public:
    void pv(void){
        cout << o << " "<<"\n";
    }
};
class Child : public Parent{
    private :
    int m;
    public:
    int n;
    void setValue(int a,int b ,int c,int d){
        x=a;
        y=b;
        w=c;
        n=d;
    }
    void printval(void){
        cout << x << ' '<< y<<" "<<w<<" "<<n<<" ";
    }
};
int main(){
    Parent p;
    Child c;
    p.pv();
    c.setValue(12,23,45,89);
    c.printval();
    return 0;
}