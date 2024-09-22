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
     void input()
    {
      cout<<"enter side1: ";
       cin>>side1;
       cout<<"enter side2: ";
      cin>>side2;
        cout<<"enter side3: ";
      cin>>side3;


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

    t1.input();
    t1.op();


}


