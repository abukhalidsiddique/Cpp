#include<iostream>
using namespace std;
class num
{
private:
    int a,b;
public:
    num()
    {
        a=0;

    }
    num(int x )
    {
        a=x;

    }
    num operator ++()
    {
        num temp;
        temp.a=a++;
        return temp;
    }
    num operator ++(int)
    {
        num temp;
        temp.a=a++;
        return temp;
    }
    void show()
    {
        cout<<"x: "<<a<<endl;
    }
};

int main()
{
    num n(2);

    num n2=n++;
     n2.show();
     n.show();
    num n3=++n;
    ++n3;

     n.show();
}
