#include <iostream>
#include <fstream>
using namespace std;
class Student{
    public:
        int age;
        int Class;
        string name;
        Student(string n,int c ,int a){
            name=n,Class=c,age=a;
        }
        friend ofstream& operator <<(ofstream& file,const Student& s);
};
ofstream& operator <<(ofstream& file,const Student& s){
    file<<s.name<<"\t";
    file<<s.Class<<"\t";
    file<<s.age<<"\t";
    return file;
}
int main(){
    Student s1("Jitraj",10,15);
    Student s2("Jason",9,14);
    Student s3("Milly",11,16);
    Student s4("Chris",11,16);
    ofstream si;
    si.open("student_info.txt",ios::app);
    si<<s1;
    si<<s2;
    si<<s3;
    si<<s4;
    si.close();
    return 0;
}