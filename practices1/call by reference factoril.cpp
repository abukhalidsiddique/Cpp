#include<iostream>
using namespace std;
  void factorial(int &p,int &q);

int main()
{
    int a,i,fact=1;
    cin>>a;
    for(i=1;i<=a;i++)
    {
       factorial(fact,i);

    }    cout<<fact;
}
  void factorial(int &p,int &q)
  {
      p=p*q;
  }
