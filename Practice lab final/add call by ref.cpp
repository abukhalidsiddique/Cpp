#include<iostream>
using namespace std;
void add(int &x,int &y);
int main()
{
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    add(a,b);
}
void add(int &x,int &y)
{
    cout<<"Sum: "<<x+y<<endl;
}
