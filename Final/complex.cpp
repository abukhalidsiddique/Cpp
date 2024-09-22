#include<iostream>
using namespace std;
class Complex
{
private:
    int real1,real2,img1,img2;
public:
    Complex()
    {
        cout<<"Enter the real1: ";
        cin>>real1;
        cout<<"Enter the real2: ";
        cin>>real2;
        cout<<"Enter the imag1: ";
        cin>>img1;
        cout<<"Enter the imag2: ";
        cin>>img2;
    }
    void show()
    {
        cout<<"real 1: "<<real1<<"\t"<<"imag 1: "<<img1<<"i"<<endl;
        cout<<"real 2: "<<real2<<"\t"<<"imag 2: "<<img2<<"i"<<endl;
    }
    void add()
    {
        cout<<"sum: "<<real1+real2<<"+"<<img1+img2<<"i"<<endl;
    }
     void sub()
    {
      int z=img1-img2;
      if(z>=0)
           cout<<"substract: "<<real1-real2<<"+"<<img1-img2<<"i"<<endl;
        else
           cout<<"sum: "<<real1-real2<<"-"<<img1-img2<<"i"<<endl;
    }
    void mul()
    {
        cout<<"Multiplication: "<<real1*real2-img1*img2<<"+"<<real1*img2+img1*real2<<"i"<<endl;
    }
};


int main()
{
    Complex c;
    c.show();
    c.add();
    c.sub();
    c.mul();
}
