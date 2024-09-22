#include<iostream>
using namespace std;
class num
{
private:
    int x,y,z;
public:
    get(int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }
    operator -()
    {
        x=-x;
        y=-y;
        z=-z;
    }
    void show()
    {
        cout<<"x: "<<x<<endl;
        cout<<"y: "<<y<<endl;
        cout<<"z: "<<z<<endl;
    }
};

int main()
{
    num n;
    n.get(-8,9,-5);
    n.show();
    -n;
    n.show();
}
