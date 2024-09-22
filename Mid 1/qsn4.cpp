#include<iostream>
using namespace std;
int n;
class Employee
{
private:
    string name,job,job_title;
    double salary;
public:
    Employee()
    {
        cin.ignore();
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter the job: ";
        getline(cin,job);
        cout<<"Enter the job title: ";
        getline(cin,job_title);
        cout<<"Enter the salary: ";
        cin>>salary;
    }
    void show()
    {
        cout<<"Name: "<<name<<endl;
         cout<<"job: "<<job<<endl;
          cout<<"job title: "<<job_title<<endl;
           cout<<"salary: "<<salary<<endl;
    }
    ~Employee()
    {

    }
};
int main()
{
    cout<<"Enter the n: ";
    cin>>n;
    Employee e[n];
    for(int i=0;i<n;i++)
    {
       cout<<"Employee: "<<i+1<<endl;
        e[i].show();
    }
}
