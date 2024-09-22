#include<iostream>
using namespace std;
 void swapp(int *s1,int *s2);

int main()
{
    int a,b,r,sum1=0,sum2=0,temp;
    cin>>a;
    temp=a;
    while(temp!=0)
    {
        r=temp%10;
        sum1=sum1*10+r;
        temp=temp/10;
    }
    cout<<sum1<<endl;
    cin>>b;
    temp=b;
    while(temp!=0)
    {
        r=temp%10;
        sum2=sum2*10+r;
        temp=temp/10;
    }
    cout<<sum2<<endl;
    swapp(&sum1,&sum2);
}
 void swapp(int *s1,int *s2)
 {
     int temp;
     temp=*s1;
     *s1=*s2;
     *s2=temp;
     cout<<*s1<<" "<<*s2<<endl;
 }
