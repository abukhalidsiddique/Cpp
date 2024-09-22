#include<iostream>
#include <cmath>
using namespace std;
inline int power(int x,int y);
int main()
{
    float base, exp;
    cout<<"enter base and exp: ";
    cin >> base >> exp;
    cout <<power(base,exp);
    return 0;
}

inline int power(int x,int y)
{
    return pow(x,y);
}
