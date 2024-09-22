#include<iostream>
using namespace std;
class Marks
{
public:
    string name;
    int roll,marks;
};
class phy:public Marks
{
public:
      void get(string n,int r)
    {
        name=n;
        roll=r;
        cout<<"Enter the mark of phy: ";
        cin>>marks;
    }
};
class chem:public Marks
{
public:
    void get(string n,int r)
    {
        name=n;
        roll=r;
        cout<<"Enter the mark of chemistry: ";
        cin>>marks;
    }
};
class math:public Marks
{
public:
    void get (string n,int r)
    {
        name=n;
        roll=r;
        cout<<"Enter the mark of math: ";
        cin>>marks;
    }
};

int main()
{
    int i, n, total1=0,total2=0;

    string name;
    cout<<"How many students: ";
    cin>>n;
    phy p[n];
    chem c[n];
    math m[n];

    for(i=0;i<n;i++)
    {
        cin.ignore();
        cout<<"Student "<<i+1<<": "<<endl;
        cout<<"Enter the name: ";
        getline(cin,name);
        p[i].get(name,i+1);
        c[i].get(name,i+1);
        m[i].get(name,i+1);
    }
    for(i=0;i<n;i++)
    {
        cout<<"Student: "<<i+1<<": "<<endl;
        cout<<"Name: "<<p[i].name<<endl;
        cout<<"Roll no: "<<p[i].roll<<endl;
        total1=p[i].marks+c[i].marks+m[i].marks;
        cout<<"Total mark: "<<total1<<endl;
        total2+=total1;
    }
    float avg=(float)total2/(float)n;
    cout<<"Average mark: "<<avg<<endl;
}
