
#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
private:
    string name;
    double salary;
public:
    Employee(double s)
    {
        name=",";
        salary=s;
    }
    Employee(Employee &s)
    {
        name=s.name;
        salary=9;
    }
    Employee()
    {
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter ht salary: ";
        cin>>salary;
    }
    Employee (string s,double m)
    {
        name=s;
        salary=m;
    }
    void show()
    {
        cout<<"name: "<<name<<endl;
        cout<<"salary: "<<salary<<endl;
    }
    ~Employee()
    {
    }
};
int main()
{
    Employee e1(600);
    Employee e2;
    Employee e3("khalid",4000);
    Employee e4=e3;
    Employee e5(e2);
    e1.show();
    e2.show();
    e3.show();
    e4.show();
    e5.show();
}
