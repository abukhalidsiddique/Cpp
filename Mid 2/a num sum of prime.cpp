#include<iostream>
using namespace std;
int main()
{
    int i,j,k=0,c=0,n,a[100];
    cout<<"Enter the terms: ";
    cin>>n;

    for(i=2;i<n;i++)
    {
        for(j=2;j<i;j++)
    {
        if(i%j==0)
            c++;

    }
       if(c==0)
        {
          a[k]=i;
          k++;
        }
       c=0;
    }

    for(i=0;i<k;i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a[i]+a[j]==20)
            {
                cout<<endl<<a[i]<<"+"<<a[j]<<"= 20";
            }
        }
    }

}
