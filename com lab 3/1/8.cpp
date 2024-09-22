#include<iostream>
using namespace std;
int main()
{
    int a,b,c,*x,*y,*z;
    cin>>a>>b>>c;
    x=&a;
    y=&b;
    z=&c;
    if(*x>*y)
    {
        if(*x>*z)
        {
            cout<<"max= "<<*x<<endl;
        }
        else
            cout<<"max= "<<*z<<endl;
    }
    else {
            if(*y>*z)
            {
                cout<<"max= "<<*y<<endl;
            }
            else
                cout<<"max= "<<*z<<endl;
         }
         if(*x<*y)
    {
        if(*x<*z)
        {
            cout<<"smallest= "<<*x<<endl;
        }
        else
            cout<<"smallest= "<<*z<<endl;
    }
    else {
            if(*y<*z)
            {
                cout<<"smallest= "<<*y<<endl;
            }
            else
                cout<<"smallest= "<<*z<<endl;
         }
}
