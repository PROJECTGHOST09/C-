#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    char x;
    cout << "Enter the string :" << '\n';
    getline(cin,s);

    cout<<"Enter the character :"<<'\n';
    cin>>x; 
    int i=0;
    int l;
    l=s.length();
    bool found=false;
    if(l==0){
        cout << "Enter a non-empty string  .";
    }
    else{
        do{
            if(s[i]==x){
                cout << "Element found at index : "<<i<<'\n';
                found=true;
            }
            i++;
        }while(i<l);
        if(!found){
            cout << "Element not found";
        }

    }
    return 0;
}