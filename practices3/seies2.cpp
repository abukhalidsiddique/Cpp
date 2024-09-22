#include<iostream>
using namespace std;
int main()
{
    double a=1,i=1,sum=0;
    for(i=1;i<=50;i++)
    {
        sum=sum+a;
        a=2*a;
    }
    cout<<sum;
}
