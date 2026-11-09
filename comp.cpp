#include <iostream>
using namespace std;
void max_two(int i,int j){
    if (i>j){
        cout<<"The greater number is : "<<i<<'\n';
    }
    else if(j>i){
        cout<<"The greater number is  : "<<j<<'\n';
    }
}
int main(){
    cout<<"Enter the two numbers for comparison : "<<'\n';
    int n1,n2;
    cin>>n1>>n2;
    max_two(n1,n2);
    return 0;
}