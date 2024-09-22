#include<iostream>
using namespace std;
int main()
{
    int m,p,c;
    cout<<"Enter the number of math: ";
    cin>>m;
     cout<<"Enter the number of physics: ";
    cin>>p;
     cout<<"Enter the number of chemistry: ";
    cin>>c;
      if((m>=65&&p>=55&&c>=50&&m+p+c>=180)||(m+p>=140))
        cout<<"Eligible"<<endl;
    else
        cout<<"Not Eligible"<<endl;
}













 //if((m>=65&&p>=55&&c>=50)&&((m+p+c>=180)||(p+c>=140)))
