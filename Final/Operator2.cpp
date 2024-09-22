#include<iostream>
using namespace std;
class a
{
private:
    int x;
public:
    a()
    {
        x=0;
    }
    a(int b);
    a operator ++();
    a operator ++(int);
    void show();
};
void a::show()
{
      {
        cout<<endl<<"x= "<<x<<endl;
      }
}
a::a(int b)
{
    x=b;
}
a a::operator ++()
{
    a temp;
    temp.x=++x;
    return temp;
}

a a::operator ++(int)
{
    a temp;
    temp.x=x++;
    return temp;
}

int main()
{
    a a1(2),a2,a3,a4;
    a1.show();
    a2=++a1;
    a2.show();
    a3=a2++;
    a3.show();
    a2.show();
    a4=++a3;
    a4.show();
    a3.show();
    a a5;
    a5=a2;
    a5.show();
}
