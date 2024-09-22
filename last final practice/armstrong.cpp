#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int temp2,n,sum=0,temp,r,i=0;
    cin>>n;
    temp=temp2=n;

    while(temp2!=0)
    {
        temp2=temp2/10;
        i++;
    }
    while(temp!=0)
    {
        r=temp%10;
        sum+=pow(r,i);
        temp/=10;
    }

    if(sum==n)
    cout<<"Armstrong";
    else
        cout<<"Not armstrong";
}
