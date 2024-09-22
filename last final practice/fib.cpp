#include<iostream>
using namespace std;
int main()
{
int first=0,second=1,fibo,countt=0,n;
cin>>n;
int *fib,*num,*f,*s,*c;
fib=&fibo;
num=&n;
f=&first;
s=&second;
c=&countt;

while(countt<*num)
{
if(countt<=1)
fibo=countt;
else
{
*fib=*f+*s;

*f=*s;
*s=*fib;
}
cout<<*fib<<" ";
countt++;
}
return 0;
}
