#include<iostream>
#include<string.h>
using namespace std;
class student
{
private:
    string name,id;
public:
    void take(string s="22203047")
    {
        cout<<"Enter the name: ";
        getline(cin,name);
        cin.ignore();
        id=s;

    }
    void give()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"id: "<<id<<endl;
    }
    string rname()
    {
        return name;
    }
     string rid()
    {
        return id;
    }
       friend student change(student f, student s,string str)
       {
           if(f.id==str)
            {
                return f;
            }
          else if(s.id==str)
            {
                return s;
            }
           else
           {
                cout<<"ERROR!!!"<<endl;
           }
       }
};

int main()
{
    student asif,khalid;
    asif.take();
    khalid.take("22203048");
    cout<<"ASif:: "<<endl;
    asif.give();
    cout<<"KHALID:: "<<endl;
    khalid.give();
    string s;
    cout<<"ENTER THE ID:: ";
    getline(cin,s);
    cin.ignore();
    student changer=change(asif,khalid,s);
    changer.take("22203049");
    cout<<"name: "<<changer.rname()<<endl;
    cout<<"id: "<<changer.rid()<<endl;
}

