#include<iostream>
using namespace std;
class rectangle
{
private:
    int side1;
    int side2;

public:
    void setDim()
    {
        cout<<"Enter the side1: ";
        cin>>side1;
         cout<<"Enter the side2: ";
        cin>>side2;
    }
    int getArea()
  {
      return side1*side2;
  }
};
int main()
{
    rectangle r1;
    r1.setDim();
      cout<<r1.getArea();

}


