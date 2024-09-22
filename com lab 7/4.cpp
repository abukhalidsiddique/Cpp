#include<iostream>
using namespace std;
class student
{
private:
    string name,major;
        int age;
public:
    student(string n,int a,string m)
    {
        name=n;
        age=a;
        major=m;
    }
    void give()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Major: "<<major<<endl;
    }
};
int main()
{
    student p("Asif",24,"Science");
    p.give();
    return 0;
}
