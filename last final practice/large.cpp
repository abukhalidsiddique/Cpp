#include<iostream>
using namespace std;
int main()
{
    int x=8,y=8,z=8;
    int *p=&x,*q=&y,*r=&z;
    if(*p==*r)
        cout<<"x and z are equal"<<endl;
     if(*p==*q)
        cout<<"x and y are equal"<<endl;
         if(*q==*r)
        cout<<"y and z are equal"<<endl;
        if(*q==*r&&*p==*q&&*p==*r)
        cout<<"They are equal"<<endl;
    if(*p>*q)
    {
        if(*p>*r)
            cout<<*p;
        else
            cout<<*r;
    }
    else
    {
        if(*q>*r)
            cout<<*q;
        else
            cout<<*r;
    }
}
