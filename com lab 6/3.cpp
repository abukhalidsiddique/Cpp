#include<iostream>
using namespace std;
class student
{
public:
    float height;
    void get()
    {
        cout<<"enter highet: ";
        cin>>height;
    }
};

int main()
{
    int n,i;
    cout<<"how many student? :";
    cin>>n;
    float avg, sum=0;
    student a[n];
    for(i=0;i<n;i++)
    {
         cout<<"STUDENT ROLL NO ["<<i+1<<"]: "<<endl;
         a[i].get();
    }
     for(i=0;i<n;i++)
     {
         sum += a[i].height;
     }
     avg = sum/n;
     cout<<"Average of their height is: "<<avg;
     return 0;
}


