#include<iostream>
using namespace std;
class base
{
public:
    virtual void show()=0;
};
class derived:public base
{
private:
    int x;
public:
    void show()
    {

        cout<<"derived";
    }
};
int main()
{
    derived d;
    base *b;
    b=&d;
    b->show();
    d.show();
}
