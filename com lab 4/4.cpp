#include<iostream>
using namespace std;
inline int cube(int n);
int main()
{
    int a;
    cin>>a;
    cout<<cube(a);
}
inline int cube(int n)
{
    return n*n*n;
}
