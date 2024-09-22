#include<iostream>
#include<math.h>
using namespace std;
class Triangle
{
private:
   int
    side1;
   int side2;
   int side3;
   int p;
   int area;
    public:
     void input(int x,int y,int z)
    {
       side1=x;
       side2=y;
       side3=z;
    }
    void op()
    {
         int p= side1+side2+side3;
         float area=sqrt(p*(p-side1)*(p-side2)*(p-side3));
          cout<<"area: "<<area<<endl<<"perimeter: "<<p;
    }
};
int main()
{
    Triangle t1;

    t1.input(3,4,5);
    t1.op();


}

