#include<iostream>
using namespace std;
class large
{
    private:
    int a[5];
    public:
        void get()
        {
            for(int i=0;i<5;i++)
            {
                cout<<"a["<<i<<"]: ";
                cin>>a[i];
            }
        }
          void cal()
          {
              int large,i,temp;
              large=a[0];
              for(i=1;i<5;i++)
              {
                  if(large<a[i])
                  {
                      temp=large;
                      large=a[i];
                  }

              }
                 cout<<large<<endl;
          }
};

int main()
{
    large a[3];
    int i;
    for(i=0;i<3;i++)
    {
        cout<<"series["<<i+1<<"]: "<<endl;
        a[i].get();
    }
    for(i=0;i<3;i++)
    {
        cout<<"result["<<i+1<<"]: "<<endl;
        a[i].cal();
    }
}

