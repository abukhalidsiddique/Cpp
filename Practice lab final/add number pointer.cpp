#include<iostream>
using namespace std;
int main()
{
    int m,n,*p,*q;
    cout<<"Enter the m: ";
    cin>>m;
    cout<<"Enter the n: ";
    cin>>n;
    p=&m;
    q=&n;
    int sum=*p+*q;
    cout<<"sum: "<<sum<<endl;

}

