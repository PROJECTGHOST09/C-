#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the number : "<<'\n';
    int n1;
    cin>>n1;
    cout<<"Enter the number : "<<'\n';
    int n2;
    cin>>n2;
    while(n2!=0){
        int r;
        r = (n1%n2);
        n1=n2;
        n2=r;
    }
    cout << "GCD :"<<n1<<'\n';
    return 0;
}