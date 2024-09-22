#include<iostream>
using namespace std;
void prime(int num);
void armstrong(int num);
void perfect(int num);
int main()
{
    int x;
    cout<<"Enter the number: ";
    cin>>x;
     prime(x);
     armstrong(x);
     perfect(x);
}
void prime(int num)
{
    int i,c=0;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
            c++;
    }
    if(c==0)
        cout<<"Prime"<<endl;
    else
        cout<<"Not Prime"<<endl;
}

void armstrong(int num)
{
    int temp,sum=0,r;
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if(sum==num)
    cout<<"Armstrong"<<endl;
    else
            cout<<"Not Armstrong"<<endl;
}

void perfect(int num)
{
    int i,sum=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
            sum=sum+i;
    }
      if(sum==num)
        cout<<"Perfect"<<endl;
      else
        cout<<"Not Perfect"<<endl;
}
