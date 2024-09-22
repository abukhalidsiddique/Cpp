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
      student()
    {
        name="SIDDIQUE";
        id=222;
        serial=2;
   give();
    }
    student(string s)
    {
        name=s;
        id=333;
        serial=3;
   give();
    }
     student(int i,string str="abu")
    {
        name=str;
        id=i;
        serial=4;
   give();
    }
     student(int i)
    {
        name="DAVID";
        id=i;
        serial=5;
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
    student s2;
    cout<<"STUDENT ROLL NO : 3"<<endl;
    student s3("KHALID");

    cout<<"STUDENT ROLL NO : 5"<<endl;
    student s5("DAVID",555,5);
    s5.give();
    cout<<"STUDENT ROLL NO : 4"<<endl;
    student s4(444,"ABU");

}
