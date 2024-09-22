#include<iostream>
using namespace std;
class number
{
protected:
    int num,sqr,cube;
public:
    number()
    {
        cout<<"Enter the num: ";
        cin>>num;
    }
};
class square: public number
{
public:
    square()
    {
        sqr=num*num;
    }
    void display()
    {
        cout<<"The square of the number: "<<sqr<<endl;
    }
};
class Cube: public number
{
public:
    Cube()
    {
        cube=num*num*num;
    }
    void display()
    {
        cout<<"The cube of the number: "<<cube<<endl;
    }
};

int main()
{
    square s;
    s.display();
    Cube c;
    c.display();
}
