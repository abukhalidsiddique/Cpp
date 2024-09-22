#include<iostream>
#include<math.h>
using namespace std;
inline int power(int x,int y);
int main()
{
    int base,exp;
    cout<<"Enter the base: ";
    cin>>base;
     cout<<"Enter the exp: ";
    cin>>exp;
    cout<<power(base,exp);
}
inline int power(int x,int y)
{
    return pow(x,y);
}
