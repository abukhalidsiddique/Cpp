#include<iostream>
using namespace std;

int main()
{
  int n,i,temp,r,p=1,sum=0;
  cin>>n;
  for(i=1;i<=n;i++)
  {
      temp=i;
      while(temp!=0)
      {
          r=temp%10;
          sum=sum+r;
          p=p*r;
          temp=temp/10;
      }
      if(sum==p)
        cout<<i<<" ";
      sum=0;
      p=1;
  }
}
