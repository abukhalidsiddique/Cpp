#include<iostream>
using namespace std;
class student
{
private:
    int roll,sub1,sub2,sub3;
    public:
    void get(int x,int y,int z)
    {
       sub1=x;
       sub2=y;
       sub3=z;
    }
    void display()
    {
       int avg=(sub1+sub2+sub3)/3;
        cout<<"Average: "<<avg<<endl;
    }
};
 int main()
 {
     int a,b,c;
     student s[3];
     for(int i=0;i<3;i++)
     {
         cout<<"Enter the numbers of student roll no["<<i+1<<"]: "<<endl;
          cin>>a>>b>>c;
         s[i].get(a,b,c);
     }
     for(int i=0;i<3;i++)
     {
         cout<<" roll no["<<i+1<<"]: "<<endl;
         s[i].display();
     }
 }
