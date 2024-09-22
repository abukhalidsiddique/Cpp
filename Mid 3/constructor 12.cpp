#include<iostream>
using namespace std;
class student
{
private:
    string name,id;
    double phone;
public:
    student()
    {
       cout<<"Enter the name: ";
       getline(cin,name);
        cout<<"Enter the id: ";
       getline(cin,id);
     cout<<"ENter the phone: ";
     cin>>phone;
     cin.ignore();
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
    student s1,s2,s3;
    s1.output();
    s2.output();
    s3.output();
}

