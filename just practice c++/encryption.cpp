#include<iostream>
using namespace std;
int main()
{
      int i,n,key,b[100];
      char a[100];
      cout<<"How many letters in your word: ";
      cin>>n;
      cout<<"Enter key: ";
      cin>>key;
      cout<<"Enter the Original word/message: ";
      for(i=0;i<n;i++)
      {
           cin>>a[i];
      }
      for(i=0;i<n;i++)
      {
          if(a[i]>='a'&&a[i]<='z')
          {
              int c=((int)a[i])-int('a')+key;
                if(c>=0)
                   {
                       b[i]=c%26;
                   }
                   else
                   {
                       b[i]=(c+26)%26;
                   }
          }
               else if(a[i]>='A'&&a[i]<='Z')
          {
              int d=((int)a[i])-int('A')+key;
                if(d>=0)
                   {
                       b[i]=d%26;
                   }
                   else
                   {
                       b[i]=(d+26)%26;
                   }
          }


      }
        cout<<"Encrypted word/message: ";
      for(i=0;i<n;i++)
      {
           cout<<char(b[i]+(int)'a');
      }

}
