#include<iostream>
using namespace std;
class Add
{
private:
    int x,y,z;
public:

    int add(int x,int y,int z)
    {
        return x+y+z;
    }
     int add(int x,int y)
    {
        return x+y;
    }
     float add(int x,float y)
    {
        return (float)x+y;
    }
     float add(float x,int y,float z)
    {
        return x+(float)y+z;
    }
};

int main()
{
    float n=4.1,n2=3.7;
    Add a;
    cout<<a.add(2,3,4)<<endl;
    cout<<a.add(2,3)<<endl;
    cout<<a.add(2,n2)<<endl;
    cout<<a.add(2.6,3,n)<<endl;

}
