#include<iostream>
using namespace std;
inline void binary(int a);
int main()
{
    int x;
    cin>>x;
    binary(x);
}
inline void binary(int a)
{
    int i=0, num[100];
   cout<<"Binary of "<<a<<": ";
    while(a>0)
    {
       num[i]=a%2;
        a=a/2;
        i++;
}

for(int j=i-1;j>=0;j--)
{
    cout<<num[j];
}


}
