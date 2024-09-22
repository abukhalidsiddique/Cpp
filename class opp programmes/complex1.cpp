#include<iostream>
using namespace std;
class complexx
{
private:
    int real1,img1,real2,img2;
public:
    complexx()
    {
        cout<<"Enter the real 1: ";
        cin>>real1;
        cout<<"Enter the image 1: ";
        cin>>img1;
        cout<<"Enter the real 2: ";
        cin>>real2;
        cout<<"Enter the image 1: ";
        cin>>img2;
    }
    void sum();
    void sub();
    void mul();
};

void complexx::sum()
{
    cout<<"sum: "<<real1+real2<<"+"<<img1+img2<<"i"<<endl;
}
void complexx::sub()
{
    int sum=img1-img2;
    if(sum>=0)
    cout<<"sum: "<<real1+real2<<"+"<<img1+img2<<"i"<<endl;
    else
     cout<<"sub: "<<real1-real2<<img1-img2<<"i"<<endl;
}
void complexx::mul()
{
    cout<<"Mul: "<<real1*real2-img1*img2<<"+"<<real1*img2+real2*img1<<"i";
}

int main()
{
    complexx c;
    c.sum();
    c.sub();
    c.mul();
}
