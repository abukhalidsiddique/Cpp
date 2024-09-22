#include<iostream>
using namespace std;
class demo
{
private:
    int a;
public:
    demo()
    {
        a=0;
    }
    demo(int x)
    {
        a=x;
    }
    void show()
    {
        cout<<a;
    }
    demo operator -()
   {
      a=-a;
   }
};
int main()
{
    demo d(3);
    -d;
    d.show();
}

