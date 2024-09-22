
 #include<iostream>
using namespace std;
class student
{
private:
    double sum,mark[3];
public:
    void get()
    {
         int i,sum2=0;
         for(i=0;i<3;i++)
         {
             cout<<"mark of sub "<<i+1<<": ";
             cin>>mark[i];
             sum2=sum2+mark[i];
         }
         sum=sum2;
    }
    void show()
    {
        cout<<"sub 1: "<<mark[0]<<endl;
         cout<<"sub2: "<<mark[1]<<endl;
          cout<<"sub3: "<<mark[2]<<endl;
          cout<<"Total: "<<sum<<endl;
    }
    friend int avg(student s[]);
};

int main()
{
   int i,n;
   cout<<"How many student: ";
   cin>>n;
    student e[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter information of student "<<i+1<<": "<<endl;
        e[i].get();
    }
     for(i=0;i<n;i++)
    {
        cout<<"student "<<i+1<<": "<<endl;
        e[i].show();
    }
    cout<<"Average mark of the three students: "<<avg(e)<<endl;
}
int avg(student s[])
{
    int i,j,sum=0;
    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
         {
             sum=sum+s[i].mark[j];
         }
    }
    return sum/3;
}
