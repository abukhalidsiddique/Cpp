#include<iostream>
using namespace std;
inline int div(int x);
int main()
{
    int i,sum=0;
    for(i=100;i<=200;i++)
    {
        sum=sum+div(i);
    }
      cout<<"sum: "<<sum<<endl;
}
inline int div(int x)
{
    if(x%9==0)
        return x;
        else return 0;
}
