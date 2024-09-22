#include<iostream>
using namespace std;
void marks(int *x,int *y,int *z);
int main()
{
    int a,b,c;
    cout<<"enter their marks: "<<endl;
    cin>>a>>b>>c;
    marks(&a,&b,&c);
}
void marks(int *x,int *y,int *z)
{
    if(*x>*y)
    {
        if(*x>*z)
        {
            cout<<"Highest got Rakib: "<<*x<<endl;
        }
        else
            cout<<"Highest got Purno: "<<*z<<endl;
    }
    else {
            if(*y>*z)
            {
                cout<<"Highest got Hasan: "<<*y<<endl;
            }
            else
                cout<<"Highest got Purno: "<<*z<<endl;
         }
}
