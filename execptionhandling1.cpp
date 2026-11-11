#include <iostream>
using namespace std;
int main(){
    int a ,b,c;
    cout<<"Enter the numerator :";
    cin>>a;
    cout<<"Enter the denominator: ";
    cin>>b;
    try{
        if(b==0){
            throw 1;
        }
        c=a/b;
        cout<<c;
    }
    catch(int e){
        cout<<"Division by zero not possible "<<endl;
    }

    return 0;
}