#include<iostream>
using namespace std;
inline int floyed(int x);
int main()
{
    int a;
    cin>>a;
    floyed(a);
}

inline int floyed(int x)
{
    int n=1,i,j,space;
    for(i=1;i<=x;i++)
    {
        for(space=1;space<=x-i;space++)
            {cout<<" ";}
        for(j=1;j<=2*i-1;j++)
            {cout<<n;

            }  n++;
        cout<<endl;

    }
}
