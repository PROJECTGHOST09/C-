#include <iostream>
using namespace std;
struct Students{
    string name;
    int age;
    char grade;
};
int main(){
    Students a;
    a.name="John Doe";
    a.age=20;
    a.grade='A';
    Students b;
    b.name="Jane Smith";
    b.age=22;
    b.grade='B';
    cout<<"Student 1:\n"<<"Name: "<<a.name<<'\n'<<"Age: "<<a.age<<'\n'<<"Grade: "<<a.grade<<'\n';
    cout<<"Student 2:\n"<<"Name: "<<b.name<<'\n'<<"Age: "<<b.age<<'\n'<<"Grade: "<<b.grade<<'\n';
}