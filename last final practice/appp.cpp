#include<iostream>
using namespace std;
inline int ap(int x, int y,int z);
int main()
{
    int f,t,dif;
    cin>>f>>t>>dif;
    cout<<"sum of ap series: "<<ap(f,t,dif)<<endl;
}
inline int ap(int x, int y,int z)
{
    return x*(x-1)*y/2;
}
