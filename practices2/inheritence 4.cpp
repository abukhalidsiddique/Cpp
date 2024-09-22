#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    string name;
    void display(int x,string y)
    {
        id=x;
        name=y;
    }
    void display2()
    {
        cout<<"id: "<<id<<endl<<"name: "<<name<<endl;
    }

};
class person:public student
{
     public:
     void display3(int x,string y)
    {
        id=x;
        name=y;
    }
    void display4()
    {
        cout<<"id: "<<id<<endl<<"name: "<<name<<endl;
    }
};
int main()
{
    student s;
    s.display(22203047,"abu");
    s.display2();
    person p;
    p.display3(22203048,"khalid");
    p.display4();
}
