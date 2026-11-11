#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream si;
    si.open("student_info.txt");
    string name;
    int Class, age;

    while(si >> name >> Class >> age) {
        cout << name << " " << Class << " " << age << endl;
    }

    si.close();
}