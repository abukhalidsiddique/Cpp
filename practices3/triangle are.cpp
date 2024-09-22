#include<iostream>
#include<math.h>
using namespace std;
class Area
{
    private:
    int base,highet;
   public:
    void fun(int x, int y)
    {
        base=x;
        highet=y;
    }
    void prin()
    {
        cout<<0.5*base*highet;
    }
};
int main()
{
    Area a1;
    a1.fun(3,4);
    a1.prin();
}
