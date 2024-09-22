#include<iostream>
using namespace std;
class Complex
{
private:
    int  real,img;
public:
    Complex()
    {
        real=0;
        img=0;
    }
    Complex(int a,int b)
    {
        real=a;
        img=b;
    }
    void show()
    {
        cout<<real<<"\t"<<img<<endl;
    }
     void sum(Complex a,Complex b,Complex c)
    {
        c.real=a.real+b.real;
        c.img=a.img+b.img;
        cout<<"Sum: "<<c.real<<"+"<<c.img<<"i"<<endl;
    }
    void sub(Complex a,Complex b,Complex c)
    {
        c.real=a.real-b.real;
        c.img=a.img-b.img;
        if(c.img>=0)
            cout<<"substraction: "<<c.real<<"+"<<c.img<<"i"<<endl;
        else
            cout<<"substraction: "<<c.real<<c.img<<"i"<<endl;
    }
    void mul(Complex a,Complex b,Complex c)
    {
        c.real=a.real*b.real-a.img*b.img;
        c.img=a.real*b.img+a.img*b.real;
        if(c.img>=0)
          cout<<"Multiplication: "<<c.real<<"+"<<c.img<<"i"<<endl;
        else
          cout<<"Multiplication: "<<c.real<<"-"<<c.img<<"i"<<endl;
    }

};

int main()
{
    Complex c1(2,3),c2(4,6),c3;
    c1.show();
    c2.show();
    c3.sum(c1,c2,c3);
     c3.sub(c1,c2,c3);
      c3.mul(c1,c2,c3);

}
