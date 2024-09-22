#include<iostream>
using namespace std;
int main()
{
    int n,temp,sum=0,r;
    cout<<"Enter the number: ";
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    cout<<"Reverse: "<<sum<<endl;
}
