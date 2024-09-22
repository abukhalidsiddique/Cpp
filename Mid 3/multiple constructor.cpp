#include<iostream>
using namespace std;
class student
{
private:
   int a,b,c;
public:
    student()
    {
        a=0;b=0;c=0;
    }
    student (int x)
    {
        a=x;
        b=0;
        c=0;
    }
     student (int x,int y)
    {
        a=x;
        b=y;
        c=0;
    }
     student (int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    student(student &s)
    {
        a=s.a;
        b=s.b;
        c=s.c;
    }
    void show()
    {
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
        cout<<"c: "<<c<<endl;
    }
    ~student()
    {

    }
};

int main()
{
    student s1,s2(3),s3(4,5,6),s4(4,5),s5=s4;
    s1.show();
    s2.show();
    s3.show();
    s4.show();
    s5.show();
}
