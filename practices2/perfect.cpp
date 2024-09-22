#include<iostream>
using namespace std;
int main()
{
    int n,i,j,sum=0;
   cin>>n;
   for(i=1;i<=n;i++)
   {
       for(j=1;j<i;j++)
       {
           if(i%j==0)
            sum=sum+j;
       }
       if(sum==i)
       {
           cout<<i<<" ";
       }
       sum=0;
   }
}
