#include<iostream>
using namespace std;
class shape
{
protected:
    float dim;
public:
    virtual void get()
    {
        cout<<"Enter the dim: ";
        cin>>dim;
    }
    virtual float area()=0;
};
class rectangle: public shape
{
public:
    float area()
    {
        return dim*dim;
    }
};
class triangle: public shape
{
public:
    float area()
    {
        return 3.1416*dim*dim;
    }
};
int main()
{
    rectangle r;
    r.get();
    cout<<"Area: "<<r.area()<<endl;
    triangle t;
    t.get();
    cout<<"Area: "<<t.area()<<endl;
}
