#include<iostream>
using namespace std;
int main()
{
    int x,y;
    int*p,*q;
    cin>>x>>y;
    p=&x;q=&y;
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;


    cout<<*p<<endl<<*q;

}

