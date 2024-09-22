#include<iostream>
using namespace std;
int main()
{
    int n,c=0,fibo,first=0,second=1;
    cin>>n;
    cout<<"Fibo of "<<n<<": ";
    while(c<n)
    {
        if(c<=1)
        fibo=c;
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }

        cout<<fibo<<" ";
       c++;
    }
}

