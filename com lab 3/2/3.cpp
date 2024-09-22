#include<iostream>
using namespace std;
void add(int *x,int *y);
int main()
{
    int a,b;
    cin>>a>>b;
    add(&a,&b);
}
void add(int *x,int *y)
{
    cout<<*x+*y;
}
