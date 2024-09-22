#include<iostream>
using namespace std;
class Complex
{
    public:
    int real,img;
    void num()
    {
      cin>>real>>img;
    }

};
int main()
{
    Complex a,b;
     cout<<"Enter the real and imaginary value of a: ";
    a.num();
     cout<<"Enter the real and imaginary value of b: ";
    b.num();

    cout<<"a+b= "<<a.real+b.real<<"+"<<a.img+b.img<<"i"<<endl;
     cout<<"ab= "<<a.real-b.real<<"+"<<a.img-b.img<<"i"<<endl;
       cout<<"a*b= "<<a.real*b.real-a.img*b.img<<"+"<<a.real*b.img+a.img*b.real<<"i"<<endl;
}
