#include<iostream>
using namespace std;
int main()
{
    int n,i,j,a=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=i;j++)
        {
            cout<<a<<" ";
          a++;
        }
          cout<<endl;
    }
}

