#include <iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breath;
    int height;
    public:
    static int count;
    static int memorycount(){
        return(count*12 + 4);
    }
    Rectangle(){
        length=0;breath=0;height=0;
        count++;
    }

};
int Rectangle::count=0;
int main(){
    Rectangle a,b,d,e,f,g;
    cout<<Rectangle::count<<endl;
    cout<<Rectangle::memorycount()<<endl;
    return 0;
}