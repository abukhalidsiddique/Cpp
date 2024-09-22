#include<iostream>
using namespace std;
class rectangle
{
private:
    int side1,side2;
public:
    rectangle(int s1,int s2)
    {
        side1=s1;
        side2=s2;
    }
    void give()
    {
        cout<<"SIDE 1: "<<side1<<endl;
        cout<<"SIDE 2: "<<side1<<endl;
    }
};

int main()
{
    rectangle r1(5,5);
    r1.give();
}
