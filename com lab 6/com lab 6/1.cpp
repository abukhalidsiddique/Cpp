#include<iostream>
using namespace std;
class employee
{
private:
    string name,date;
    int salary;
public:
    void get(string x,int y, string z)
    {
        name=x;
        salary=y;
        date=z;
    }
    void show()
    {
        cout<<"name: "<<name<<endl;
        cout<<"salary: "<<salary<<endl;
        cout<<"date of joining: "<<date<<endl;
    }
};

int main()
{
    int n,i;
    cout<<"how many employee? :";
    cin>>n;
     employee a[n];
    for(i=0;i<n;i++)
    {
         cout<<"EMPLOYEE["<<i+1<<"]: "<<endl;
        string name,date_of_joining;
        int salary;
        cout<<"Enter the salary: ";
        cin>>salary;
        cout<<"Enter the name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter the joining date: ";
        getline(cin,date_of_joining);
       a[i].get(name,salary,date_of_joining);

    }
    for(i=0;i<n;i++)
    {
        cout<<"EMPLOYEE["<<i+1<<"]: "<<endl;
        a[i].show();
    }
}
