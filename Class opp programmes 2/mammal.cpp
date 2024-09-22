#include<iostream>
using namespace std;
class mammal
{
public:
    void print1()
    {
        cout<<"I am mammal"<<endl;
    }
};
class marine
{
public:
    void print2()
    {
        cout<<"I am marine"<<endl;
    }
};
class blue:public mammal,public marine
{
public:
    void print3()
    {
        cout<<"I am blue"<<endl;
    }
};
int main()
{
    mammal ma;
    ma.print1();
    marine me;
    me.print2();
    blue b;
    b.print3();
    b.print1();
    b.print2();
}
