#include<iostream>
using namespace std;
int main()
{
   int x;
   cout<<"X: ";
   cin>>x;
    int *p;
    p=&x;

    cout<<x<<endl;
    cout<<p<<endl;
     cout<<*p<<endl;
}

