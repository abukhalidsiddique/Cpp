#include<iostream>
using namespace std;
int main()
{
    int a[10];
   int i;
    for(i=0;i<10;i++)
    {
        cout<<"a["<<i<<"]:";
        cin>>a[i];
    }
    cout<<"EVENS: ";
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
            cout<<a[i]<<" ";
    }
    cout<<endl<<"ODDS: ";
     for(i=0;i<10;i++)
    {
        if(a[i]%2!=0)
            cout<<a[i]<<" ";
    }

}
