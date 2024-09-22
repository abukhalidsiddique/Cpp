#include<iostream>
using namespace std;
class com
{
private:
    int  a;
public:
    com();
    com(int x);
    void show();
    com operator -(com d);
};
   com::com()
    {
        a=0;
    }
   com::com(int x)
{
    a=x;
}
void com:: show()
{
    cout<<a<<endl;
}
com com:: operator -(com d)
{
    com temp;
    temp.a=a-d.a;
    return temp;
}

int main()
{
    com c1(80),c2(50),c3=c1-c2;
    c1.show();
    c2.show();
    c3.show();
}

