#include<iostream>
using namespace std;
class employee
{
private:
    string name,position;
        int age,salary;
public:
    employee(string n,int a,string p,int s)
    {
         name=n;
         age=a;
         position=p;
         salary=s;
    }
    void give()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Position: "<<position<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main()
{
    employee e("Asif",24,"Chief",34000);
    e.give();
    return 0;
}

