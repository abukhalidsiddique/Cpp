#include<iostream>
using namespace std;
class student
{
protected:
    string name;
public:
    student()
    {
        cout<<"Enter the name: ";
        getline(cin,name);
    }
    void show()
    {
         cout<<"name: "<<name<<endl;
    }
};
class employee:virtual public student
{
protected:
    string id;
public:
    employee()
    {
        cout<<"Enter the id: ";
        getline(cin,id);
    }
    void show()
    {
        cout<<"name: "<<name<<endl;
        cout<<"id: "<<id<<endl;
    }
};
class worker:  virtual public employee
{
protected:
    string serial;
public:
    worker()
    {
        cout<<"enter the serial: ";
        getline(cin,serial);
    }
    void show()
    {
        cout<<"name: "<<name<<endl;
        cout<<"serial: "<<serial<<endl;
        cout<<"id: "<<id<<endl;
    }

};
class orphane
{
protected:
    int age;
public:
    orphane()
    {
        cout<<"Enter age: ";
        cin>>age;
    }
};
class teacher:virtual protected worker,virtual protected employee
{
protected:
    void show()
    {
        cout<<"name: "<<name<<endl;
        cout<<"serial: "<<serial<<endl;
        cout<<"id: "<<id<<endl;
    }
};
int main()
{
    student s;
    cout<<"student:"<<endl;
    s.show();
    employee e;
    cout<<"employee:"<<endl;
    e.show();
    worker w;
    cout<<"worker:"<<endl;
    w.show();
}

