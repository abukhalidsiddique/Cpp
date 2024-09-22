#include<iostream>
using namespace std;
class student
{
   public:
    int sub1,sub2,sub3;
   public:
    void get()
    {
        cout<<"Enter the number of sub1: ";
        cin>>sub1;
        cout<<"Enter the number of sub2: ";
        cin>>sub2;
        cout<<"Enter the number of sub3: ";
        cin>>sub3;
    }

};

int main()
{
    int i,n;
    cout<<"Enter how many student: ";
    cin>>n;
    student s[n];
    for(i=0;i<n;i++)
    {
        cout<<"Roll "<<i+1<<": "<<endl;
        s[i].get();
    }
    float avg;
  for(i=0;i<n;i++)
  {
      cout<<"The average of student roll no "<<i+1<<endl;
      avg=(s[i].sub1+s[i].sub2+s[i].sub3)/3;
      cout<<"The average number: "<<avg<<endl;
  }
}
