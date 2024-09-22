#include<iostream>
using namespace std;
void rev(int *p,int*q);
void swapp(int *p,int*q);
int main()
{
    int a=1234;
    int b=5678;
   cout<<"Before reverse and swapping"<<endl<<"a: "<<a<<"\t"<<"b: "<<b<<endl;
    rev(&a,&b);
    swapp(&a,&b);
     cout<<"After reverse and swapping"<<endl<<"a: "<<a<<"\t"<<"b: "<<b<<endl;
}

void rev(int *p,int*q)
{
     int sum=0,r;
     while(*p!=0)
      {
          r=*p%10;
     sum=sum*10+r;
     *p=*p/10;
      }
      *p=sum;
      sum=0;
        while(*q!=0)
      {
          r=*q%10;
     sum=sum*10+r;
     *q=*q/10;
      }
      *q=sum;

}

void swapp(int *p,int*q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
