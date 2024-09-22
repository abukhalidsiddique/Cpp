#include<iostream>
using namespace std;
class person
{
protected:
    string name;
    int age;
public:
     person()
    {
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter the age: ";
        cin>>age;
    }
};
class student : virtual protected person
{
protected:
    string id;
    int gpa;
public:
    student()
    {
        cout<<"Enter the id: ";
        cin.ignore();
        getline(cin,id);
        cout<<"Enter the gpa: ";
        cin>>gpa;
    }

};
class athlet: virtual protected person,virtual protected student
{
protected:
    string sport;
public:
    athlet()
    {
        cout<<"Enter the sport: ";
        cin.ignore();
        getline(cin,sport);
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"id: "<<id<<endl;
        cout<<"gpa: "<<gpa<<endl;
        cout<<"Sport: "<<sport<<endl;
    }

};

int main()
{
    athlet a;
    a.display();
}
