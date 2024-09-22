#include<iostream>
using namespace std;
class shape
{
protected:
    float width,height;
public:
    shape()
    {
       cout<<"Enter the width: ";
       cin>>width;
       cout<<"Enter the height: ";
       cin>>height;
    }
};
class rectangle: protected shape
{
public:
    void display()
    {
        cout<<"Area: "<<width*height<<endl;
    }
};

int main()
{
    rectangle r;
    r.display();
}
