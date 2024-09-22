#include<iostream>
using namespace std;
void send(int *p,int *s);
int main()
{
   int n,temp,sum=0;
   cin>>n;
   temp=n;
   while(temp!=0)
   {
       send(&temp,&sum);
   }
   cout<<sum;
}
void send(int *p,int *s)
{
    int r;
    r=*p%10;
    *s=*s*10+r;
    *p=*p/10;
}
