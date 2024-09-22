#include<iostream>
using namespace std;
int main()
{
    int a,*x,fact=1,i,*f;
    cin>>a;
    x=&a;
    f=&fact;
    for(i=1;i<=*x;i++)
    {
        *f=*f*i;
    }
    cout<<"factorial of "<<*x<<": "<<*f<<endl;
}
