#include<iostream>
using namespace std;
class Add
{
protected:
    int x,y,z;
public:
    virtual void add()=0;
};
class add1:protected Add
{
protected:
    int add(int x,int y);
};
int add1:: add(int x,int y)
{
    this->x=x;
    this->y=y;
    return x+y;
}
int main()
{
     Add* a;
     add1 &b;
     a=&b;
     cout<<a.add(7,3)<<endl;
}
