#include <iostream>
using namespace std;

void addition(int i,int j){
    cout<<i+j<<endl;
}
void addition(float x, float y){
    cout<<x+y<<endl;
}
void addition(int n1,int n2,int n3){
    cout<<n1+n2+n3<<endl;
}
int main(){
    int n1,n2,n3;
    float x,y;
    int i,j;
    n1=n2=n3=5;
    x=3.25;
    y=5.25;
    i=6;
    j=4;
    addition(x,y);
    addition(i,j);
    addition(n1,n2,n3);
    return 0;
}

