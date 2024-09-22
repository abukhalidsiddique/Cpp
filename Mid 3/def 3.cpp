#include<iostream>
using namespace std;
class Employee
{
private:
    string name;
    double salary;
public:
  Employee (string n)
    {
       name=n;
       salary=9;
    }
    Employee ()
    {
      cout<<"Name: ";
      getline(cin,name);
      cout<<"salary: ";
      cin>>salary;
    }
    Employee(string n,double s)
    {
        name=n;
        salary=s;
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
    Employee s("kahlid");
    Employee e;
    Employee e2("ya",90);
    e.show();
    e2.show();
    s.show();
}


