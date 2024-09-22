#include<iostream>
using namespace std;
class mark
{
private:
    string name;
    int roll, marks[3];
public:
    void get(int n)
    {
        roll=n;
        cin.ignore();
        cout<<"Enter the name: ";
        getline(cin,name);
        int i;
        for(i=0;i<3;i++)
        {
            cout<<"Enter sub "<<i+1<<": ";
            cin>>marks[i];
        }
    }
    void show()
    {
        cout<<"Roll: "<<roll<<endl;
         cout<<"Name: "<<name<<endl;
          cout<<"Marks: "<<endl;
          for(int i=0;i<3;i++)
          {
               cout<<"sub "<<i+1<<": ";
            cout<<marks[i]<<endl;
          }


    }
     friend void avg(mark b[]);
};
void avg(mark b[])
{
    int sum1=0,i,j,sum=0;
    for(i=0;i<3;i++)
    {
         for(i=0;i<3;i++)
         {
             sum+=b[i].marks[j];
         }
         cout<<"student "<<i+1<<" total mark: "<<sum<<endl;
         sum1+=sum;
         sum=0;
    }
    cout<<"average total mark: "<<sum1/3<<endl;

}


int main()
{
   int n;
    cout<<"How many student: ";
    cin>>n;
    mark b[n];
    int i,sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
        cout<<"student "<<i+1<<endl;
        b[i].get(i+1);
    }
     for(i=0;i<n;i++)
    {
        cout<<"student "<<i+1<<endl;
        b[i].show();
    }
   avg(b);

}

