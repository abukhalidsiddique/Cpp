#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,avg,n;
    for(i=1;i<5;i++)
    {
        cin>>n;
        sum=sum+n;
    }
      avg=sum/(i-1);
      cout<<avg;
}
