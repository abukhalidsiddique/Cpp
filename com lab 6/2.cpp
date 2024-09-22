#include<iostream>
using namespace std;
class student
{
private:
         int sub1,sub2,sub3;
public:
    void get(int x,int y,int z)
    {
        sub1=x;
        sub2=y;
        sub3=z;
    }
    void show()
    {
        int avg;
        avg=(sub1+sub2+sub3)/3;
        cout<<"The average mark: "<<avg<<endl;
    }
};

int main()
{
    int n,i;
    cout<<"how many student? :";
    cin>>n;
     student a[n];
    for(i=0;i<n;i++)
    {
         cout<<"STUDENT ROLL NO["<<i+1<<"]: "<<endl;
         int s1,s2,s3;
        cout<<"Enter the mark of sub1: ";
        cin>>s1;
        cout<<"Enter the mark of sub2: ";
        cin>>s2;
        cout<<"Enter the mark of sub3: ";
        cin>>s3;
       a[i].get(s1,s2,s3);
    }
    for(i=0;i<n;i++)
    {
        cout<<"STUDENT ROLL NO["<<i+1<<"]: "<<endl;
        a[i].show();
    }
}

