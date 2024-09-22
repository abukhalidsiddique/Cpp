#include<iostream>
using namespace std;
class person
{
    public:
    string name;
    int id;
    int serial;
    void display1()
    {

       cout<<"\n"<<name<<" "<<id<<" "<<serial<<"\n";

    }


};
class student: public person
{
public:
    float gpa;
    void display2()
    {
         cout<<id<<" "<<name<<" "<<id<<" "<<serial<<"\n";
         display1();
    }
};
int main()
{
    student s1;
    s1.id=222;
    s1.name="Abu";
    s1.serial=55;
    s1.gpa=3.82;
    s1.display2();
}
