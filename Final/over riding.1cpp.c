#include<iostream>
using namespace std;
class Add
{
protected:
    int x,y,z;
public:
    void add()=0;
};
class add1:protected Add
{
    void add(int x,int y);
};
inline class add1: add(int x,int y)
{
    return x+y;
}
int main()
{
    add1 b;
     Add *a=b;
     cout<<a.add(7,3)<<endl;
}
