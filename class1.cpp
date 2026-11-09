#include <iostream>
using namespace std;
class Reverse{
    public:
    int reverse(int i){
        int rev ,r;
        while(i!=0){
            r=i%10;
            rev = rev*10 + r;
            i/=10;
        }
        return rev;
    }
};
int main(){
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    Reverse r;
    cout<<"The reversed number is "<<r.reverse(n);

    return 0;
}