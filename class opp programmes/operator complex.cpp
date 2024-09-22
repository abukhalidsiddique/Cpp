#include<iostream>
using namespace std;
class com
{
private:
    int real,img;
public:
    com();
    com(int x,int y);
    void show();
    com operator +(com d);
};
   com::com()
    {
        real=0;
        img=0;
    }
   com::com(int x,int y)
{
    real=x;
    img=y;
}
void com:: show()
{
    cout<<real<<"+"<<img<<"i"<<endl;
}
com com:: operator +(com d)
{
    com temp;
    temp.real=real+d.real;
    temp.img=img+d.img;
    return temp;
}

int main()
{
    com c1(3,4),c2(5,6),c3=c1+c2;
    c1.show();
    c2.show();
    c3.show();
}
