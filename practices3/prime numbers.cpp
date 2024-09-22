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
    int i,countt=0;
    for(int j=2;j<=x;j++)
    {
            for(i=2;i<j;i++)
    {
        if(j%i==0)
            countt++;

    } if(countt==0)
            cout<<j<<" ";countt=0;

    }
}
