#include<iostream>
using namespace std;
int fibo(int &x,int &y);
int main()
{
    int first=0,second=1,i,n;
    cin>>n;
    cout<<"Fibo of "<<n<<": "<<first<<" "<<second<<" ";
    for(i=2;i<n;i++)
    {
        fibo(first,second);
        cout<<second<<" ";
    }
}
int fibo(int &x,int &y)
{
   int sum;
   sum=x+y;
   x=y;
   y=sum;
}
