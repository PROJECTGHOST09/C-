#include <iostream>
using namespace std;
int age(int a){
    if (a>=18){
        cout << "eligible to vote"<< endl;
    }
    else if (a<0){
        cout << "Enter a valid age"<<'\n';
    }
    else{
        cout <<"ineligible to vote"<<'\n';
    }
    return 0;
}
int main(){
    cout <<"Enter your age: ";
    int i;
    cin>>i;
    age(i);
    return 0;
}