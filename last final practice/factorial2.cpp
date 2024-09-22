
#include<iostream>
using namespace std;
int fact(int x);
int main()
{
    int n;
    cin>>n;
   cout<<"factorial: "<<fact(n);
}

int fact(int x)
{
    if(x==0)
        return 1;
    else
        return x*fact(x-1);
}
