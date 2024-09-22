#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double i,a=2,sum=0;
    for(i=0;i<50;i++)
    {
        sum=sum+pow(a,i);
    }
    cout<<sum;
}
