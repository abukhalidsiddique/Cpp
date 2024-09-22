#include<iostream>
using namespace std;
inline fibo(int f,int s,int x);
int main()
{
    int a,first=0,second=1;
    cin>>a;
    cout<<first<< " "<< second<<" ";
    fibo(first,second,a);
}
inline fibo(int f,int s,int x)
{
    int i,fibo;
    for(i=2;i<x;i++)
    {
        fibo=f+s;
        f=s;
        s=fibo;
        cout<<fibo<<" ";
    }
}
