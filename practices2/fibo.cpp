#include<iostream>
using namespace std;
int main()
{
    int n,fibo,first=0,second=1,countt=0;
    cin>>n;
    while(countt<n)
    {
        if(countt<=1)
        fibo=countt;
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        cout<<fibo<<" ";
        countt++;

    }
}
