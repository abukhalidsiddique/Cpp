#include<iostream>
using namespace std;
int & c();
int a;
int main()
{
   int b;
   cin>>b;
   c()=b;
    cout<<a;
    return 0;
}
int & c()
{
    return a;
}
