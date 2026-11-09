#include <iostream>
using namespace std;
int main(){
    int i=123456;
    int rev;
    int r;
    while(i!=0){
        r=i%10;
        rev =rev*10 +r;
        i/=10;
    }
    cout<<rev;
}