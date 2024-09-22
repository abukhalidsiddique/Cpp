#include<iostream>
using namespace std;
class student
{
public:
    int id;
    int age;
    void display(int x,int y)
    {
        id=x;
        age=y;
    }
    void display2()
    {
        cout<<id<<endl<<age;
    }
};
class person: public student
{
public:
   void display3(int x,int y)
    {
        id=x;
        age=y;
    }
    void display4()
    {
     cout<<id<<endl<<age;
    }
};

int main()
{
    person p;
    p.display3(2222, 23);
    p.display4();
}
