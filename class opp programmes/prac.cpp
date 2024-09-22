#include<iostream>
using namespace std;
class com
{
    int real,img;
public:
    com()
    {
        real=0;
        img=0;
    }
    com(int x,int y)
    {
        real=x;
        img=y;
    }
    void show()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    friend com add(com ,com );
};
  com add(com a,com b)
{
   com t;
   t.real=a.real+b.real;
   t.img=a.img+b.img;
   return t;
}

int main()
{
   com a(2,4),b(4,5);
   a.show();
   b.show();
   com c=add(a,b);
   c.show();
}
