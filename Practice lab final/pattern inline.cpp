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
int i,j,k;
for(i=1;i<=n;i++)
{
    for(k=1;k<=n-i;k++)
        cout<<" ";
for(j=1;j<=i;j++)
{
cout<<"* ";

}
cout<<"\n";
}
}

