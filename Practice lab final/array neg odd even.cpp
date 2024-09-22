#include<iostream>
using namespace std;
int main()
{
    int i,a[10],neg[10],even[10],odd[10];
    for(i=0;i<10;i++)
    {
       cout<<"Enter the number for index a["<<i<<"]: ";
       cin>>a[i];
    }
      cout<<"Negative: "<<endl;
      for(i=0;i<10;i++)
      {
          if(a[i]<0)
            cout<<"a["<<i<<"]: "<<a[i]<<endl;
      }
      cout<<"Even: "<<endl;
      for(i=0;i<10;i++)
      {
          if(a[i]%2==0)
            cout<<"a["<<i<<"]: "<<a[i]<<endl;
      }
        cout<<"Odd: "<<endl;
      for(i=0;i<10;i++)
      {
          if(a[i]%2!=0)
            cout<<"a["<<i<<"]: "<<a[i]<<endl;
      }

}
