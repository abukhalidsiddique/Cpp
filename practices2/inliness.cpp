#include<iostream>
using namespace std;
inline void draw(int x);
int main()
{
    int n;
    cin>>n;
    draw(n);
}
inline void draw(int x)
{
    int i,k,j;
    for(i=1;i<=x;i++)
    {
       for(k=1;k<=x-i;k++)
       {
           cout<<" ";
       }
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=x-1;i>=0;i--)
    {
       for(k=1;k<=x-i;k++)
       {
           cout<<" ";
       }
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
