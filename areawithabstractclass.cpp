#include<iostream>
using namespace std;
class Shape{
    virtual void area()=0;
};
class Rectangle:public Shape{
    public:
        float l,w,area1;
        void area(){
        cout<<"Enter the length and the width for the area calculation : ";
        cin>>l>>w;
        area1=l*w;
        cout<<"Area for the rectangle is : "<<area1<<endl;
        }
};
class Triangle : public Shape{
    public:
    float h,b,area2;
    void area(){
        cout<<"Enter the height and the base for the area calculation : ";
        cin>>h>>b;
        area2=0.5*h*b;
        cout<<"Area for the triangle is : "<<area2<<endl;
    }
};
int main(){
    Rectangle r;
    Triangle t;
    r.area();
    t.area();
    return 0;
}