#include<iostream>
using namespace std;
class num
{
protected:
    int num,sqr,cub;
public:
    num()
    {
        cout<<"Enter the num: ";
        cin>>num;
    }
};
class square : protected num
{
public:
    square()
    {
        sqr=num*num;
    }
    void show()
    {
        cout<<"sqr= "<<sqr<<endl;
    }
};
class cube : protected num
{
public:
    cube()
    {
        cub=num*num*num;
    }
    void show()
    {
        cout<<"cube= "<<cub<<endl;
    }
};
int main()
{
    square s;
    s.show();
    cube c;
    c.show();
}
