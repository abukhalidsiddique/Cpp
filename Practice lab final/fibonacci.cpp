#include<iostream>
using namespace std;
int main()
{
    int n,first=0,second=1,fibo,c=0;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Fibo of "<<n<<": ";

    while(c<n)
    {
        if(c<=1)
        {
            fibo=c;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }

        cout<<fibo<<" ";

        c++;
    }

   return 0;
}
