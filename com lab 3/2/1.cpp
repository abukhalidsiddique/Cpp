#include<iostream>
using namespace std;
void call(int *x, int *y);
int main()
{
    int first=0, second=1, n, fibo,i;
    cin>>n;
    cout<<first<<" "<<second<<" ";
    for(i=2;i<n;i++)
    {
        call(&first,&second);
        cout<<second<<" ";
    }
}
void call(int *x, int *y)
{
    int sum;
    sum= *x+*y;
    *x=*y;
    *y=sum;
}

