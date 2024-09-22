#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,r1,r2,c1,c2;

    cout<<"How many row and column in a: ";
    cin>>r1>>c1;
    cout<<"How many row and column in b: ";
    cin>>r2>>c2;
    while(r1!=r2&&c1!=c2)
    {
        cout<<"How many row and column in a: ";
        cin>>r1>>c1;
        cout<<"How many row and column in b: ";
        cin>>r2>>c2;
    }

    cout<<"Enter a"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
      cout<<"Enter b"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"b["<<i<<"]["<<j<<"]: ";
            cin>>b[i][j];
        }
    }

    cout<<"a: "<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;

    }
        cout<<"b: "<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;

    }
    cout<<"a+b"<<endl;
       for(i=0;i<r1;i++)
       {
           for(j=0;j<c1;j++)
           {
               c[i][j]=a[i][j]+b[i][j];
           }
       }
        cout<<"a+b: "<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;

    }
   int k,sum=0,m[10][10];

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c2;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            m[i][j]=sum;
            sum=0;
        }
    }
  cout<<"a*b: "<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;

    }
}
