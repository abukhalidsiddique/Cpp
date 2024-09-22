#include<iostream>
using namespace std;
class number
{
private:
    int x;
public:
    number()
    {
        x=0;
    }
    number(int a)
    {
        x=a;
    }
    void show()
    {
        cout<<"X: "<<x<<endl;
    }
    number operator ++()
    {
        number temp;
        temp.x=++x;
        return temp;
    }
    number operator ++(int)
    {
        number temp;
        temp.x=x++;
    }
};
int main()
{
    number n1(2),n2,n3;
    ++n1;
    n1.show();
    n2=n1++;
    n2.show();
    n1.show();
    n3=n1++;
    n3.show();
    n1.show();
}
