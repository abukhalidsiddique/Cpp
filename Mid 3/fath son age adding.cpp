#include<iostream>
using namespace std;
class age
{
private:
    int hh,mm,ss;
public:
    void get()
    {
        cout<<"enter the hours: ";
        cin>>hh;
        cout<<"enter the minutes: ";
        cin>>mm;
        cout<<"enter the seconds: ";
        cin>>ss;
    }
    void show()
    {
        cout<<"Hours: "<<hh<<" minutes: "<<mm<<" seconds: "<<ss<<endl;
    }
    void sum(age a1,age a2)
    {
        int s,m,h;
        s=a1.ss+a2.ss;
        ss=s%60;
        m=s/60+a1.mm+a2.mm;
        mm=m%60;
        hh=m/60+a1.hh+a2.hh;
    }
};

int main()
{
    age fage,sage,tage;
    cout<<"Enter the fathers age: "<<endl;
    fage.get();
    cout<<"Enter the sons age: "<<endl;
    sage.get();
    cout<<"Fathers age: "<<endl;
    fage.show();
    cout<<"Sons age: "<<endl;
    sage.show();
    tage.sum(fage,sage);
    cout<<"Total AGe: "<<endl;
    tage.show();

}
