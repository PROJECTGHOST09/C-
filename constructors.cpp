#include<iostream>
using namespace std;
class Students{
    public:
    int age;
    public:
    int  getage(){
        return age;//accessors
    }
    int display(){
      //  cout<<age<<endl;//facilitators
        return age ;
    }
    int setage(int a){
        age=a;
       // cout << "The changed value is : "<<a<<endl;//mutators
        return a;
    }
    bool isadult(){
        return age<=18;
    }
};
int main(){
    Students s[5];
    s[0].age=19;
    s[1].age=18;
    s[2].age=20;
    s[3].age=16;
    s[4].age=25;
    for (int i =0;i<5;i++){
        cout << s[i].display() << '\n';
    }
    s[2].getage();
    s[1].setage(19);
    for(int i = 0; i< 5 ;i++){
        cout <<s[i].isadult()<<'\n';
    }
    for (int i =0;i<5;i++){
        cout << s[i].display() << '\n';
    }
    return 0;
}