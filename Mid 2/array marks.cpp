#include<iostream>
using namespace std;
#define sub 3
int n;
class student
{
   private:
    string name,id;
    int marks[sub];
   public:
    student ()
    {
        cin.ignore();
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter the id: ";
        getline(cin,id);
        cout<<"Enter the marks "<<endl;
        int i;
        for(i=0;i<sub;i++)
        {
            cout<<"subject "<<i+1<<": ";
            cin>>marks[i];
        }
    }
     void show()
     {
         cout<<"name: "<<name<<endl;
         cout<<"id: "<<id<<endl;
           cout<<"marks: "<<endl;
           int i;
           for(i=0;i<sub;i++)
           {
               cout<<"Subject "<<i+1<<": "<<marks[i]<<endl;
           }
     }
     friend int average(student s[]);
};
int main()
{
   cout<<"how many student : ";
   cin>>n;
   student s[n];
   int i;
   for(i=0;i<n;i++)
   {
       cout<<"student "<<i+1<<endl;
       s[i].show();
   }

   cout<<"Average : "<<average(s)<<endl;
}

int average(student s[])
{
   int i,j,sum=0,avg;
   for(i=0;i<n;i++)
   {
       for(j=0;j<sub;j++)
       {
          sum+=s[i].marks[j];
       }
   }
     avg=sum/(n*sub);
     return avg;
}
