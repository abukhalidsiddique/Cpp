#include<iostream>
using namespace std;
inline void add(int x,int y);
int main()
{
    int a=9;
    int b=8;
    add(a,b);
}
inline void add(int x,int y)
{
    cout<<x+y;
}
