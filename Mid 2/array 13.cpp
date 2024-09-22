 #include<iostream>
using namespace std;
class student
{
   public:
    float heigth;
   public:
    void get()
    {
        cout<<"Enter heigth: ";
        cin>>heigth;
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
    float sum=0,avg;
  for(i=0;i<n;i++)
  {
       sum+=s[i].heigth;

  }
     avg=sum/n;
     cout<<"Average heigth: "<<avg;
}
