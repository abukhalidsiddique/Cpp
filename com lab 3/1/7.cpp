#include<iostream>
using namespace std;
int main()
{
     int a,b,*x,*y;
     cin>>a>>b;
     cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
     x=&a;
     y=&b;
     int temp;
     temp=*x;
     *x=*y;
     *y=temp;
     cout<<"after swapping: "<<endl<<"a: "<<*x<<endl<<"b: "<<*y<<endl;
     return 0;
}


