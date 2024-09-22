#include<iostream>
using namespace std;
class Employee
{
private:
    string name;
    double salary;
public:
    Employee (string n=";",double s=90)
    {
        name=n;
        salary=s;
    }

    void show()
    {
        cout<<"name: "<<name<<endl;
        cout<<"salary: "<<salary<<endl;
    }
};
int main()
{
    Employee e;
    Employee e2("ya");
    e.show();
    e2.show();
}

