#include<iostream>
using namespace std;
class age
{
private:
        int hh,mm,ss;
public:
    void input();
    void output();
    void sum(age a1,age a2);
};
void age::input()
{
    cout<<"Enter hour: ";
    cin>>hh;
    cout<<"Enter minute: ";
    cin>>mm;
    cout<<"Enter ss: ";
    cin>>ss;
}
void age::output()
{
    cout<<hh<<" hr "<<mm<<" min "<<ss<<" sec "<<endl;
}
void age:: sum(age a1,age a2)
{
    int h,m,s;
    s=a1.ss+a2.ss;
    ss=s%60;
    m=s/60+a1.mm+a2.mm;
    mm=m%60;
    hh=m/60+a1.hh+a2.hh;
}
int main()
{
    age f,s,total;
    cout<<"Enter fathers age: "<<endl;
    f.input();
    cout<<"Enter sons age: "<<endl;
    s.input();
    cout<<"Fathers age: ";
    f.output();
    cout<<"sons age: ";
    s.output();
    total.sum(f,s);
    cout<<"Total time: ";
    total.output();
}

