#include<iostream>
using namespace std;
void c(int &x,int &y);

int main()
{
    int a=8;
    int b=7;
    c(a,b);
}

void c(int &x,int &y)
{
    cout<<x+y;
}
