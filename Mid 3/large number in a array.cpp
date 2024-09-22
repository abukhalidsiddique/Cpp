#include<iostream>
using namespace std;
class large
{
private:
    int a[5];
public:
    void get()
    {
        int i;
        for(i=0;i<5;i++)
        {
            cout<<"a["<<i<<"]:";
            cin>>a[i];
        }
    }
      int summ()
      {
          int i;
          int sum=0;
          for(i=0;i<5;i++)
          {
              sum+=a[i];
          }
        cout<<"sum: "<<sum<<endl;
      }
    void cal()
    {
        int i,j,temp;

        for(i=0;i<5;i++)
        {
            for(j=i+1;j<5;j++)
            {
                if(a[i]<a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
          for(i=0;i<5;i++)
          {

              cout<<a[i]<<" ";
          }
          cout<<endl;
    }
};
int main()
{
    large s[3];
    int i;
    for(i=0;i<3;i++)
    {
       cout<<"series: "<<i+1<<endl;
        s[i].get();
    }
    for(i=0;i<3;i++)
    {
       cout<<"Series: "<<i+1<<endl;
        s[i].cal();
    }
    large s1;
    s1.summ();

}
