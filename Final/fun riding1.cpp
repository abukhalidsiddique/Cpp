#include<iostream>
using namespace std;
class student
{
protected:
    int roll;
    string name;
public:
    virtual void get(int a,string n)=0;

};
class person:public student
{
public:
    void get(int a,string n)
    {
        roll=a;
        name=n;
        cout<<"I am a person"<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
class employee: public student
{
public:
    void get(int a,string n)
    {
        roll=a;
        name=n;
        cout<<"I am an employee"<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

int main()
{
    student *s;

    person p1;
    p1.get(4,"Khalid");
    s=&p1;
    s->get(8,"final");
    employee e1;
    e1.get(6,"Siddique");

}
