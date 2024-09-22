#include<iostream>
using namespace std;
class rectangle
{
private:
    int side1;
    int side2;

public:
    int area(int x,int y)
    {
        side1=x;
        side2=y;
       return side1*side2;
    }
};
int main()
{
    rectangle r1,r2;
     cout<<"rectangle 1"<<endl;
     cout<<"Area: "<<r1.area(4,5)<<endl;
      cout<<"rectangle 2"<<endl;
     cout<<"Area: "<<r2.area(5,8)<<endl;
}

