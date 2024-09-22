#include<iostream>
#include<conio.h>
using namespace std;
class maain
{
public:
    virtual void display()=0;
};
class asif:public maain
{
    public:
    void display()
    {
        cout<<"I am asif"<<endl;
    }
};

class khalid:public maain
{
    public:
    void display()
    {
        cout<<"I am khalid"<<endl;
    }
};
int main()
{
    maain *m;
    asif a;
    khalid k;
    m=&a;
    m->display();
    m=&k;
    m->display();

}

