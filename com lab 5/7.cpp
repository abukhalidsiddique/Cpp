#include<iostream>
using namespace std;
class area
{
private:
    int side1;
    int side2;

public:

    int returnArea(int x,int y)
  {
      side1=x;
      side2=y;
      return side1*side2;
  }
};
int main()
{
    area r1;

    int a,b;
    cout<<"Enter the side1: ";
        cin>>a;
         cout<<"Enter the side2: ";
        cin>>b;

      cout<<r1.returnArea(a,b);

}



