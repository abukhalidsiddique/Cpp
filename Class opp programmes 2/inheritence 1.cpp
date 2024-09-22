#include<iostream>
using namespace std;
class person
{
protected:
    string name;
public:
    person()
    {
        cout<<"Enter the name: ";
        cin>>name;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
    }
};
class student:public person
{
protected:
    string id;
public:
    student()
    {
        cout<<"Enter the id: ";
        cin>>id;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"id: "<<id<<endl;
    }
};
int main()
{
    person p;
    p.display();
    student s;
    s.display();
}
