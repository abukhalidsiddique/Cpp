#include<iostream>
using namespace std;
inline void binary(int x);
int main()
{
    int a;
    cout<<"Enter the decimal number: ";
    cin>>a;
    binary(a);
}

inline void binary(int x)
{
    int a[100];
    int i=0,j;
    while(x>0)
    {
        a[i]=x%2;
        x=x/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        cout<<a[j];
    }

}
