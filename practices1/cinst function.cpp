#include <iostream>
using namespace std;
int sum(int a=9, int b=1, int c=30);

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    cout<<sum()<<endl;
   return 0;
}
int sum(int a, int b, int c)
{
   return a+b+c;
}
