#include<iostream>
using namespace std;
class add
{
private:
    int a,b,c;
    float f;
public:
    int display(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
        return a+b+c;
    }
    int display(int x,int y)
    {
        a=x;
        b=y;
        return a+b;
    }
   int display(int x)
    {
        a=x;
        return a;
    }
    float display(float x,int y)
    {
        f=x;
        a=y;
        return f+(float)y;
    }

};
int main()
{
    add a1,a2,a3,a4;
    cout<<"a1: "<<endl;
    cout<<a1.display(1,2,3)<<endl;
    cout<<"a2: "<<endl;
    cout<<a2.display(1,2)<<endl;
    cout<<"a3: "<<endl;
    cout<<a3.display(2)<<endl;
    cout<<"a4: "<<endl;
    cout<<a4.display(5,5,5)<<endl;


}
