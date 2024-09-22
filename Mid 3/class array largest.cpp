#include<iostream>
using namespace std;
class large
{
   private:
    int a,b,c;
   public:
    void get(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void cal()
    {
        if((a>b)&&(a>c))
            cout<<a;
        else if((b>a)&&(b>c))
            cout<<b;
        else
            cout<<c;
        cout<<endl;
    }

};

int main()
{
    large a[3];
    int i,x,y,z;
    for(i=0;i<3;i++)
    {

      cin>>x>>y>>z;
       a[i].get(x,y,z);
    }
    for(i=0;i<3;i++)
    {
        a[i].cal();
    }
}
