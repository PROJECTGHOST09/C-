#include <iostream>
using namespace std;
class Cube{
    public:
    int side;
    void volume(void){
        int v;
        v=side*side*side;
        cout<<"The volume for the cube is : "<<v<<endl;
    }
    void sa(void){
        int a;
        int s;
        a=(side *side )*6;
        cout<<"The surface area is :"<<a<<endl;
    }
};
int main(){
    Cube c;
    cout<< "Enter the side :  ";
    cin >> c.side;
    c.volume();
    c.sa();
    return 0;
}