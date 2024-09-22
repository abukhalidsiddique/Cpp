#include<iostream>
using namespace std;
int n;
#define sub 5
class student
{
private:
    string name,id;
    double marks[sub];
    double sum;
    int large;
public:
    student()
    {
        cin.ignore();
        cout<<"enter the name: ";
        getline(cin,name);
        cout<<"enter the id: ";
        getline(cin,id);
        cout<<"Enter the marks: "<<endl;
        int i;
        double sum2=0;
        for(i=0;i<sub;i++)
        {
            cout<<"marks[sub"<<i+1<<"]: ";
            cin>>marks[i];
            sum2+=marks[i];
        }
        sum=sum2;
    }
    void show()
    {
        cout<<"name: "<<name<<endl;
        cout<<"id: "<<id<<endl;
        cout<<"marks: "<<endl;
        for(int i=0;i<sub;i++)
        {
            cout<<"Sub "<<i+1<<": "<<marks[i]<<endl;
        }
    }
    void highest()
    {
       int i,j,temp,large;

      for(i=0;i<sub;i++)
      {
          for(j=i+1;j<sub;j++)
          {
              if(marks[i]<marks[j])
              {
                  temp=marks[i];
                  marks[i]=marks[j];
                  marks[j]=temp;
              }

          }
      }
        large=marks[0];
         cout<<"largest bumber : "<<marks[0]<<endl;

    }
      friend double average(student s[]);
      friend int high(student s[]);
      friend student topper(student s[]);
};
int main()
{
    cout<<"How many students: ";
    cin>>n;
    student s[n];
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"student "<<i+1<<endl;
        s[i].show();
        s[i].highest();
    }
    cout<<"Average marks accordingly per subject: "<<average(s)<<endl;

    high(s);

   cout<<"topper: "<<endl;
    student d=topper(s);
    d.show();
}

double average(student s[])
{
    int i;
    double sum3=0,avg;
    for(i=0;i<n;i++)
    {
        sum3+=s[i].sum;
    }
    avg=sum3/(n*sub);
    return avg;
}
int high(student s[])
{
   int i;
   for(i=0;i<n;i++)
   {
      cout<<"highest: "<<s[i].marks[0]<<endl;
   }
}
student topper(student s[])
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {

      for(j=i+1;j<n;j++)
      {
          if(s[i].sum>s[i+1].sum)
       {
           return s[i];

       }
        else return s[i+1];
    }
    }
}

