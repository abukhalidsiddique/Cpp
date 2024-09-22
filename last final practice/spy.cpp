#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,sum=0,temp,r,p=1;
    cin>>n;
    temp= n;

    while(temp!=0)
    {
        r=temp%10;
        sum+=r;
        p*=r;
        temp/=10;
    }

    if(sum==p)
    cout<<"spy";
    else
        cout<<"Not spy";
}

