#include<iostream>
using namespace std;
inline void prime(int x);
int main()
{
   int n;
    cin>>n;
    prime(n);
}
inline void prime(int x)
{
    int i,j,sum=0;
    for(j=1;j<=x;j++)
    {
            for(i=2;i<j;i++)
    {
        if(j%i==0)
           {
                sum=sum+i;
           }
    }
     if(sum==j)
           {
               cout<<j<<" ";
           }
            sum=0;
}
}
