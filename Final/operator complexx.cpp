#include<iostream>
using namespace std;
class Complex
{
private:
    int real,imag;
public:
    Complex()
    {
        real=0;
        imag=0;
    }
    Complex(int a,int b)
    {
        real=a;
        imag=b;
    }
    void show(Complex c)
    {
        cout<<c.real<<"+"<<c.imag<<"i"<<endl;
    }
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
};
int main()
{
    Complex n1(2,4),n2(8,6),n3;
    n3=n1+n2;
    n3.show(n3);
}
