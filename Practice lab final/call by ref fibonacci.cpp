#include<iostream>
using namespace std;
void fibonacci(int *f,int *s);
int main()
{
    int n,first=0,second=1,fibo,i;
    cout<<"Enter the n: ";
    cin>>n;
    cout<<"Fibo: "<< first<<" "<<second<<" ";
    for(i=2;i<n;i++)
    {
        fibonacci(&first,&second);
        cout<<second<<" ";
    }
}

void fibonacci(int *f,int *s)
{
    int sum=*f+*s;
    *f=*s;
    *s=sum;
}
