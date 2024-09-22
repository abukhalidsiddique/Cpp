#include<iostream>
using namespace std;
int main()
{
    int a,*p,r,sum=0,temp,*s;
    cin>>a;
    p=&a;
    s=&sum;

    while(*p!=0)
    {
        r=*p%10;
        *s=(*s*10)+r;
        *p=*p/10;
    }
    cout<<"reverse: "<<*s;
    return 0;
}
