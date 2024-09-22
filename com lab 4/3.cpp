#include<iostream>
using namespace std;
inline void floyd(int n);
int main()
{
    int a;
    cin>>a;
    floyd(a);
}
inline void floyd(int n)
{
    int i,j,x=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<x<<" ";
            x++;
        }

        cout<<"\n";
    }
}
