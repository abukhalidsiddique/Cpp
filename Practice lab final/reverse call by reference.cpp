#include<iostream>
using namespace std;
void swapp(int &a,int &b);
int rev(int x);
int main()
{
    int a=1234;
    int b=67890;
    int x,y;
    x=rev(a);
    y=rev(b);
    swapp(x,y);
    cout<<"a: "<<x<<endl;
    cout<<"b: "<<y<<endl;
}
int rev(int x)
{
    int temp,r,sum=0;
    temp=x;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    return sum;
}
void swapp(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
