#include<iostream>
using namespace std;
class shape
{
public:
     void show()
    {
        cout<<"This is a shape"<<endl;
    }
};
class polygon: public shape
{
public:
    void show()
    {
        cout<<"Polygon is a shape"<<endl;
    }
};
class rectangle: public polygon
{
public:
    void show()
    {
        cout<<"Rectangle is a polygon"<<endl;
    }
};
class triangle: public polygon
{
public:
    void show()
    {
        cout<<"Triangle is a polygon"<<endl;
    }
};
class square: public rectangle
{
public:
    void show()
    {
        cout<<"square is a rectangle"<<endl;
    }
};
int main()
{
    shape s;
    polygon p;
    rectangle r;
    triangle t;
    square s2;
    s.show();
    p.show();
    r.show();
    t.show();
    s2.show();
}
