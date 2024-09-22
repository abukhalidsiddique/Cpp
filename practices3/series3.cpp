#include<iostream>
using namespace std;

int main()
{
    double a=1,sum=0,i=1;
   while(a!=51)
   {
        sum=sum+i;
       i=i*2;
       a++;
   }
   cout<<sum;
}
