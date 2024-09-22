#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    int*p,*q,*r;
    cin>>x>>y>>z;
    p=&x;q=&y;r=&z;
    cout<<*p<<endl<<q<<endl<<*r;

}
