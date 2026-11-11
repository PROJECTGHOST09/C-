#include <iostream>
#include<cctype>
using namespace std;

int main() {
    int a;
    char b;
    try{
        if(!(cin>>a)){
            throw 1;
        }
        if(!(cin>>b)){
            throw 'A';
        }
        if(!isalpha(b)){
            throw 'A';
        }
    }
    catch(int e){
        cout<<"Invalid integer."<<endl;
    }
    catch(char x){
        cout<<"Invalid character. "<<endl;
    }
    return 0;
}