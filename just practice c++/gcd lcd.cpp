#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,n4,r,gcd,lcd;
    cin>>n1>>n2;
    n3=n1;
    n4=n2;
    while(n4!=0)
     {
         r=n3%n4;
         n3=n4;
         n4=r;
     }
     gcd=n3;
     lcd=(n1*n2)/gcd;
     cout<<"GCD= "<<gcd<<endl;
     cout<<"LCD: "<<lcd;
}
