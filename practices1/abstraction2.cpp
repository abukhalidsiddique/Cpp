#include<iostream>
using namespace std;
class ok
{
    public:
    virtual void display()=0;
};
class asif:public ok
{
    public:
    void display()
    {
        cout<<"asif"<<endl;
    }
};
class khalid:public ok
{
   public:
       void display()
       {
           cout<<"khalid"<<endl;
       }

} ;
int main()
{
    ok *p;
    asif a;
    khalid k;
    p=&a;
    p->display();
    p=&k;
    p->display();
}
