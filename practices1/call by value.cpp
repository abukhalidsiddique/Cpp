 #include<iostream>
using namespace std;
int call(int x,int y);
int main()
{
    int a=3;
    int b=6;

    call(a,b);
    cout<<a<<endl<<b<<endl;
}
int call(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<x<<endl<<y<<endl;
}
