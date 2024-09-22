#include<iostream>
using namespace std;
 int main()
 {
     int a,b,*x,*y,z;
     cin>>a>>b;
     x=&a;
     y=&b;
     z=*x+*y;
     cout<<"sum: "<<z;
     return 0;
 }

