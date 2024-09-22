#include<iostream>
using namespace std;
class volume
{
private:
    int x,y,z;
public:
    volume()
    {
        x=0;y=0;z=0;
    }
    volume(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    volume operator +(volume v)
    {
        volume temp;
        temp.x=x+v.x;
        temp.y=y+v.y;
        temp.z=z+v.z;
        return temp;
    }
    void show()
    {
        cout<<"Volume: "<<x*y*z<<endl;
    }
};
int main()
{
    volume v1(2,3,4),v2(5,6,7),v3=v1+v2;
    cout<<"Volume of v1: "<<endl;
    v1.show();
     cout<<"Volume of v2: "<<endl;
    v2.show();
     cout<<"Volume of v3: "<<endl;
    v3.show();

}
