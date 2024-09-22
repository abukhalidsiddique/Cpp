#include<iostream>
using namespace std;
class com
{
private:
    int  a,b,c;
public:
    com();
    com(int x,int y,int z);
    void show();
    com operator +(com d);
};
   com::com()
    {
        a=0;
        b=0;
        c=0;
    }
   com::com(int x,int y,int z)
{
     a=x;
     b=y;
     c=z;
}
void com:: show()
{
    cout<<a*b*c<<endl;
}
com com:: operator +(com d)
{
    com temp;
    temp.a=a+d.a;
    temp.b=b+d.b;
     temp.c=c+d.c;
    return temp;
}

int main()
{
    com c1(6,7,5),c2(12,13,10),c3=c1+c2;
    c1.show();
    c2.show();
    c3.show();
}

