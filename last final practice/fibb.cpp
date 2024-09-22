#include<iostream>
using namespace std;
void fib(int *p,int *q);
int main()
{
   int first=0,second=1,n,i;
   cin>>n;
   cout<<"Fibo of "<<n<<": "<<first<<" "<<second<<" ";
   for(i=2;i<n;i++)
   {
       fib(&first,&second);
       cout<<second<<" ";
   }

}
void fib(int *p,int *q)
{
    int sum;
    sum=*p+*q;
    *p=*q;
    *q=sum;

}
