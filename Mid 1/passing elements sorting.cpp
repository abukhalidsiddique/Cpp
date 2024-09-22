#include<iostream>
using namespace std;
class large
{
private:
    int a[3];
    public:
    void get(int x,int y,int z)
    {

        a[0]=x;
        a[1]=y;
        a[2]=z;
    }
    void show()
    {
       for(int i=0;i<3;i++)
       {
           cout<<"a["<<i<<"]: "<<a[i]<<"\n";
       }
    }
    void big()
    {
        if((a[0]>a[1])&&(a[0]>a[2]))
            cout<<"large number: "<<a[0]<<endl;
        else if((a[1]>a[0])&&(a[1]>a[2]))
            cout<<"large number: "<<a[1]<<endl;
            else
                cout<<"large number: "<<a[2]<<endl;
    }
};
int main()
{
    large s[3];
    int i,x,y,z;
    for(i=0;i<3;i++)
    {
      cout<<"num["<<i<<"]: "<<endl;
       cin>>x>>y>>z;
        s[i].get(x,y,z);
    }
    for(i=0;i<3;i++)
    {
       cout<<"Series: "<<i+1<<endl;
        s[i].show();
    }
    for(i=0;i<3;i++)
    {
       cout<<"big: "<<i+1<<endl;
        s[i].big();
    }
}

