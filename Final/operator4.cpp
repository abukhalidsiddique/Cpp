#include<iostream>
using namespace std;
class sub
{
private:
    int x,y;
public:
    sub();
    sub(int a,int b);
    void show();
    sub operator -();

};
void sub::show()
{
        cout<<"X: "<<x<<"\t"<<"Y: "<<y<<endl;
}

sub sub::operator-()
{
    x=-x;
    y=-y;
}
sub::sub()
{
     cout<<"Enter the x: ";
     cin>>x;
     cout<<"Enter the y: ";
     cin>>y;
}
sub::sub(int a, int b)
{
    x=a;
    y=b;
}
int main()
{
    sub s1(3,4),s2(-4,9),s3(-2,-1),s4=s1;
    -s1;
    s1.show();
    -s2;
    s2.show();
    -s3;
    s3.show();
    -s4;
    s4.show();


}
