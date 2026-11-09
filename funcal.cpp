#include <iostream>
#include <cmath>
using namespace std;
int add(int i,int j){
    cout << i+j<<'\n';
    return 0;
}
void sub(int i,int j){
    cout<<i-j<<'\n';
}
void divi(int i,int j){
    if(j==0){
        cout<<"Enter any other number as it cannot be divided by 0."<<'\n';
    }
    else{
        cout<<i/j<<'\n';
    }
}
void mul(int i,int j){
    cout <<i*j<<'\n';
}
void power(int i,int j){
    cout<<pow(i,j);
}
int main(){
    cout <<"Enter the numbers and the operator : ";
    int n1,n2;
    char op;
    cin >>n1>>n2>>op;
    if(op == '+'){
        add(n1,n2);
    }
    else if(op=='-'){
        sub(n1,n2);
    }
    else if(op=='*'){
        mul(n1,n2);
    }
    else if(op=='/'){
        divi(n1,n2);
    }
    else if(op == '^'){
        power(n1,n2);
    }
    else{
        cout<<"Enter a valid operation !!!!!!";
    }
    return 0;
}