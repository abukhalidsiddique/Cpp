#include<iostream>
using namespace std;
#define pi 3.1416
using namespace std;
int r=2;
void area();
class myclass
{
public:
    int a;
    void display()
    {
        cout<<"inside class\n";
    }
};
int main()
{
    myclass m;
    m.a=90;
    m.display();
    area();
     cout<<"Helloworld from main funtion\n";
    cout<<m.a<<"\n";
    return 0;
}
void area()
{
    float area;
    area=pi*r*r;
    cout<<area<<"\n";
}
