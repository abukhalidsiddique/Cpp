#include<iostream>
using namespace std;
int main()
{
    int i,n,fibo,first=0,second=1;
    cin>>n;
    cout<<"Fibo of "<<n<<": "<<first<<" "<<second<<" ";
    for(i=2;i<n;i++)
    {
        fibo=first+second;
        first=second;
        second=fibo;
        cout<<fibo<<" ";

    }
}
