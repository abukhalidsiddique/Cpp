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
};
class employee
{
protected:
    string id;
public:
    employee()
    {
        cout<<"Enter the id: ";
        getline(cin,id);
    }
};
class person:public student,public employee
{
protected:
    string serial;
public:
    person()
    {
        cout<<"Enter the serial: ";
        getline(cin,serial);
    }
    void show()
      {
          cout<<"name: "<<name<<endl;
          cout<<"id: "<<id<<endl;
          cout<<"serial: "<<serial<<endl;
      }
};
class worker:public person
{
protected:
    string salary;
public:
    worker()
    {
        cout<<"Enter the salary: ";
        getline(cin,salary);
    }
     void show()
      {
          cout<<"name: "<<name<<endl;
          cout<<"id: "<<id<<endl;
          cout<<"serial: "<<serial<<endl;
          cout<<"salary: "<<salary<<endl;
      }
};
int main()
{
    person p;
    cout<<"person"<<endl;
    p.show();
    worker w;
    cout<<"worker"<<endl;
    w.show();
}
