#include<iostream>
using namespace std;
class Mark
{
public:
    int roll,mark;
    string name;
    Mark()
    {
        cout<<"Enter the mark: ";
        cin>>mark;
    }
};
class physics: public Mark
{
public:
    void show1()
    {
        cout<<"Physics: "<<mark<<endl;
    }
};
class chemistry: public Mark
{
public:
    void show2()
    {
        cout<<"chemistry: "<<mark<<endl;
    }
};
class math: public Mark
{
public:
    void show3()
    {
        cout<<"Math: "<<mark<<endl;
    }
};

int main()
{

    physics p;
    chemistry c;
    math m;
    p.show1();
    c.show2();
    m.show3();

    cout<<"Total Marks: "<<p.mark+c.mark+m.mark<<endl;
    cout<<"Average Marks: "<<(p.mark+c.mark+m.mark)/3<<endl;
}
