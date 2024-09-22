#include<iostream>
using namespace std;
int add(int *x,int *y);
int main()
{
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<add(&a,&b);
}
int add(int *x,int *y)
{
      return *x+*y;
}

