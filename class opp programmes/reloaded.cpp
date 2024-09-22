#include<iostream>
using namespace std;
class mark
{
public:
    int roll,marks;
    string name;

};
class phy: public mark
{
public:
    void get(int r,string n)
    {
        roll=r;
        name=n;
        cout<<"Enter the phy: ";
        cin>>marks;
    }

};
class math: public mark
{
public:
    void get(int r,string n)
    {
        roll=r;
        name=n;
        cout<<"Enter the math: ";
        cin>>marks;
    }
};
class chem: public mark
{
public:
    void get(int r,string n)
    {
        roll=r;
        name=n;
        cout<<"Enter the chem: ";
        cin>>marks;
    }
};

int main()
{
  int n;
    cout<<"How many students: ";
    cin>>n;
    phy p[n];
    math m[n];
    chem c[n];
    int i;
    string name;
    for(i=0;i<n;i++)
    {
        cin.ignore();
        cout<<"Enter information for student "<<i+1<<endl;
        cout<<"ENter the name: ";
        getline(cin,name);
        p[i].get(i+1,name);
        m[i].get(i+1,name);
        c[i].get(i+1,name);
    }
    int total1=0,total2=0;
    for(i=0;i<n;i++)
    {
        cout<<"Roll"<<p[i].roll<<endl;
        cout<<"Name"<<p[i].name<<endl;
        cout<<"Marks in physics: "<<p[i].marks<<endl;
        cout<<"Marks in math: "<<m[i].marks<<endl;
        cout<<"Marks in chemistry: "<<c[i].marks<<endl;
        total1+=p[i].marks+m[i].marks+c[i].marks;
        total2+=total1;
        cout<<"Total mark: "<<total1<<endl;
        total1=0;
    }

    cout<<"Average mark  of students in total subject: "<<total2/n<<endl;
    cout<<"Average mark of the student per one subject: "<<total2/(n*3)<<endl;
}
