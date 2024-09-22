#include<iostream>
using namespace std;
void fun(int *a);
int main()
{
    int x;
    cout<<"Enter the X: ";
    cin>>x;
    int *p=&x;
    fun(p);
    cout<<p<<endl;
}
void fun(int *a)
{

    cout<<"Value: "<<*a<<endl;
}
