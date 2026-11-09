#include <iostream>
using namespace std;
class Employee{
    private:
    int id;
    protected:
    int salary;
    public:
    string name;
    void setvalue(int a){
        id=a;
    }
    void pv(void){
        cout << id <<" ";
    }
};
class Manager : public Employee{
    public:
    string department;
    void setdetails(int s,string n,string d){
        salary=s;
        name=n;
        department=d;
    }
    void display(void){
        cout <<salary<<" "<<name<<" "<<department<<" ";
    }
};
int main(){
    Employee e1;
    Employee e2;
    Employee e3;
    Manager m;
    e1.setvalue(1);
    e2.setvalue(2);
    e3.setvalue(3);
    e1.pv();
    e2.pv();
    e3.pv();
    m.setdetails(45000,"Jason","IT");
    m.display();
    return 0;
}