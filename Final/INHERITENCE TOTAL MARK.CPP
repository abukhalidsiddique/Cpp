#include<iostream>
using namespace std;
class mark
{
public:
    int roll,mark;
    string name;
};
class physics: public mark
{
   public:
    void get(string n,int r)
    {
        roll=r;
        name=n;
        cout<<"Enter the mark of physics: ";
        cin>>mark;
    }
};
class chemistry: public mark
{
    public:
    void get(string n,int r)
    {
        roll=r;
        name=n;
        cout<<"Enter the mark of chemistry: ";
        cin>>mark;
    }
};
class math: public mark
{
    public:
    void get(string n,int r)
    {
        roll=r;
        name=n;
        cout<<"Enter the mark of math: ";
        cin>>mark;
    }
};
int main()
{
    int i,n,rol,total=0,totalfinal=0,avg;
    string namee;
    cout<<"Enter the number of student: ";
    cin>>n;
    physics p[n];
    chemistry c[n];
    math m[n];
    for(i=0;i<n;i++)
    {
        cin.ignore();
        total=0;
        cout<<"Enter the name: ";
        getline(cin,namee);
        p[i].get(namee,i+1);
        c[i].get(namee,i+1);
        m[i].get(namee,i+1);
        total+=p[i].mark+c[i].mark+m[i].mark;
        totalfinal+=total;
        cout<<"Total mark of "<<namee<<endl<<"Roll no: "<<i+1<<endl<<"mark= "<<total<<endl;
    }
    avg=(float)totalfinal/(float)n;
    cout<<"The average mark: "<<avg<<endl;
}
