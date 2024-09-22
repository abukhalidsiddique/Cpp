#include<iostream>
using namespace std;
class complexx
{
private:
    int real1,img1,real2,img2;
    public:
    void input();
    void output();
    void sum();
    void substraction();
    void multiplication();
};
inline void complexx:: input()
{
        cout<<"Enter the real 1: ";
    cin>>real1;
        cout<<"Enter the img 1: ";
    cin>>img1;
        cout<<"Enter the real 2: ";
    cin>>real2;
        cout<<"Enter the img 2: ";
    cin>>img2;
}
inline void complexx:: output()
{
    cout<<"real 1: "<<endl<<real1<<endl;
     cout<<"img 1: "<<img1<<endl;
    cout<<"real 2: "<<real2<<endl;
      cout<<"img 2: "<<img2<<endl;
}
inline void complexx:: sum()
{
    cout<<"the sum: ="<<real1+real2<<"+"<<img1+img2<<"i"<<endl;
}
inline void complexx:: substraction()
{
    int z;
    z=img1-img2;
    if(z>=0)
    cout<<"the sub: ="<<real1-real2<<"+"<<z<<"i"<<endl;
    else
          cout<<"the sub: ="<<real1-real2<<z<<"i"<<endl;
}
inline void complexx:: multiplication()
{
    cout<<"multiplication: "<<real1*real2-img1*img2<<"+"<<real1*img2+real2*img1<<"i";
}

int main()
{
    complexx doo;
    doo.input();
    doo.output();
    doo.sum();
    doo.substraction();
    doo.multiplication();
}
