#include<iostream>
using namespace std;
class Employee
{
private:
    string name;
    double salary;
public:
    Employee ()
    {
        name=";";
        salary=0;
    }
    Employee(string n,double m)
    {
        name=n;
        salary=m;
    }
    void show()
    {
        cout<<"name: "<<name<<endl;
        cout<<"salary: "<<salary<<endl;
    }
};
int main()
{
    Employee e1,e2("Khalid",50000);
    e1.show();
    e2.show();
}
