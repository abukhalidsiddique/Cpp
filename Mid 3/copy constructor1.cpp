
#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int id;
    int serial;
public:
       student(string str,int i,int s)
    {
        name=str;
        id=i;
        serial=s;
   give();
    }

    studen(student &s)
    {
        name=s.name;
        id=s.id;
        serial=s.serial;
    }
      student(string str,int i=333)
    {
        name=str;
        id=i;
        serial=3;
   give();
    }

    void give()
    {
        cout<<"NAME: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"SERIAL: "<<serial<<endl<<endl;
    }
};
int main()
{
    cout<<"STUDENT ROLL NO : 1"<<endl;
    student s1("ASIF",111,1);
    cout<<"STUDENT ROLL NO : 2"<<endl;
    student s2=s1;
    s2.give();
    cout<<"STUDENT ROLL NO : 3"<<endl;
    student s3("ASIF");
    cout<<"STUDENT ROLL NO : 4"<<endl;
    student s4=s3;
    s4.give();
}
