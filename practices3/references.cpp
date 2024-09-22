#include<iostream>
using namespace std;
void s(int &x );
int main()
{
    int a=8;

    s(a);
    cout<<"main"<<a<<endl;
}
void s(int &x )
{
     x=1;
     cout<<&x<<endl;

}
