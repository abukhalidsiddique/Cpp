#include<iostream>
using namespace std;
int main()
{
    int a,b,*m,*n,temp;
    cout<<"Enter the a: ";
    cin>>a;
    cout<<"Enter the b: ";
    cin>>b;
    m=&a;
    n=&b;
    temp=*m;
    *m=*n;
    *n=temp;
    cout<<"a: "<<*m<<endl;
    cout<<"b: "<<*n;

}
