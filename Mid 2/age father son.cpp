#include<iostream>
using namespace std;
class time
{
private:
    int hh,mm,ss;
public:
    void get()
    {
        cout<<"Enter hour: ";
        cin>>hh;
        cout<<"Enter minute: ";
        cin>>mm;
        cout<<"Enter second: ";
        cin>>ss;
    }
    void show()
    {
        cout<<hh<<": "<<mm<<": "<<ss<<"\t"<<endl;

    }
      void sum(time t1,time t2)
      {
          int s,m,h;
          s=t1.ss+t2.ss;
          m=s/60+t1.mm+t2.mm;
          ss=s%60;
          hh=m/60+t1.hh+t2.hh;
          mm=m%60;
      }
};

int main()
{
    time ftime,stime,ttime;
    cout<<"Enter the fathers time: "<<endl;
    ftime.get();
    cout<<"Enter the sons time: "<<endl;
    stime.get();
    cout<<"fathers time: "<<"\t"<<endl;
    ftime.show();
    cout<<"sons time: "<<"\t"<<endl;
    stime.show();
   cout<<"Total Time: "<<endl;
    ttime.sum(ftime,stime);
    ttime.show();
}
