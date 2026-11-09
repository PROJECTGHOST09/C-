#include <iostream>
using namespace std;
class Number{
    public :
    int n;
    Number operator *(Number o){
        Number temp ;
        temp.n= n * o.n;
        return temp;
    }
    Number operator -(Number o){
        Number temp;
        if(n>o.n){
            temp.n=n-o.n;
            return temp;
        }
        else if(n<o.n){
            temp.n=o.n-n;
            return temp;
        }
        return temp;
    }
};
int main(){
    Number n1;
    Number n2;
    Number n3;
    Number n4;
    n1.n=15;
    n2.n=20;
    n3=n2*n1;
    cout<<n3.n<<endl;
    n4=n1-n2;
    cout << n4.n<<endl;
    return 0;
}
