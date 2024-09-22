#include<iostream>
using namespace std;
inline float kg(float n);
int main()
{
    float a;
    cin>>a;
    cout<<kg(a);
}
inline float kg(float n)
{
    return n*0.453592;
}
