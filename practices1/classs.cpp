#include<iostream>
#include<math.h>
using namespace std;
 class rectangle
 {
 public:
     int side1,side2;

    void area(int x,int y)
    {
     side1=x;side2=y;

    }
    void pr()
    {
         cout <<side1*side2;
    }
 };
 int main()
 {
     rectangle r;
     r.area(3,4);
     r.pr();
 }
