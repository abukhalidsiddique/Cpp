#include<iostream>
using namespace std;
class student
{
private:
    string name,id;
public:
    student(string s="22203047")
    {
        cout<<"Enter the name: ";
        getline(cin,name);
        cin.ignore();
        id=s;

    }
    int give()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"id: "<<id<<endl;
    }
    ~student()
    {
        cout<<"i am";
    }
};
int main()
{
    student asif,khalid;
    cout<<"ASif:: "<<endl;
    asif.give();
    cout<<"KHALID:: "<<endl;
    khalid.give();

}
