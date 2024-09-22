#include<iostream>
using namespace std;
int main()
{
    int m,n,*p,*q,temp;
    cin>>m>>n;
    p=&m; q=&n;
    temp=*p; *p=*q; *q=temp;
    cout<<m<<endl<<n;
}
