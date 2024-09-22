#include<iostream>
using namespace std;
inline void fun(int x);
int main()
{
    int a;
    cin>>a;
    fun(a);



}
inline void fun(int x)
{
     int y;
     y=x+3;
     cout<<y;
}
