#include<iostream>
using namespace std;
class Complex
{
private:
    int real,img;
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
    Complex operator +(Complex x);
    friend void display(Complex x );
};
Complex Complex::operator +(Complex x)
{
    Complex temp;
    temp.real=real+x.real;
    temp.img=img+x.img;
    return temp;

}
void display(Complex x)
{
    cout<<"Real: "<<x.real<<" +  "<<"img: "<<x.img<<"i"<<endl;
}
int main()
{
    Complex c1(4,6),c2(6,4),c3=c1+c2;
    cout<<"c1: "<<endl;
    display(c1);
    cout<<"c2: "<<endl;
    display(c2);
    cout<<"c3: "<<endl;
    display(c3);

}
