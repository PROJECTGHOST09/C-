#include <iostream>
using namespace std;
class Factorial{
    public:
    int fact(int i){
        int j,t=1;
        for(j=1;j<=i;j++){
            t*=j;
        }
        return t;
    }
    
};
int main(){
    Factorial f;
    int n=5;
    cout<<"Factorial of "<<n<<"is "<<f.fact(n);
    return 0;
}