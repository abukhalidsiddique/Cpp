#include<iostream>
using namespace std;
class Add
{
protected:
    int x,y,z;
public:
    virtual int add(int x,int y)=0;
};
class add1:public Add
{
    public:
    int add(int x,int y);
};
inline int add1:: add(int x,int y)
{
    return x+y;
}
int main()
{
    add1 b;
    Add* d1=&b;
    cout<<d1->add(7,5)<<endl;
}
