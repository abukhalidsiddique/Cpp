#include<iostream>
using namespace std;
class time
{
private:
    int ss,mm,hh;
public:
    void get()
    {
        cout<<"Enter hh: ";
        cin>>hh;
         cout<<"Enter mm: ";
        cin>>mm;
         cout<<"Enter ss: ";
        cin>>ss;
    }
    void show()
    {
        cout<<hh<<"\t"<<mm<<"\t"<<ss<<endl;
    }
    void add(time a,time b)
    {
        int s,m,h;
        s=a.ss+b.ss;
        ss=s%60;
        m=s/60+a.mm+b.mm;
        mm=m%60;
        hh=a.hh+b.hh+m/60;
    }
};
int main()
{
    cout<<"Enter the fathers time: "<<endl;
    time f;
    f.get();
    cout<<"Enter the sons time: "<<endl;
    time s;
    s.get();
    cout<<"Fathers time: "<<endl;
    f.show();
    cout<<"sons time: "<<endl;
    s.show();
    time t;
    t.add(f,s);
    cout<<"Total time: "<<endl;
    t.show();
}
