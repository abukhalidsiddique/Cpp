#include<iostream>
using namespace std;
class student
{
private:
    string name,id;
    double phone;
public:
    student(string n,string m,double o)
    {
        name=n;
        id=m;
        phone=o;
    }
    student()
    {
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter the id: ";
        getline(cin,id);
        cout<<"Enter the phone: ";
        cin>>phone;
    }
    void output()
    {
        cout<<"NAME: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Phone: "<<phone<<endl;
    }
};
int main()
{
    student s1("ABU KHALID","222",36544);
    student s2;

    s1.output();
    s2.output();
}
