#include<iostream>
using namespace std;
class bank
{
private:
    string name,date;
    double salary;
public:
    void get()
    {
        cin.ignore();
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter the date: ";
        getline(cin,date);
        cout<<"Enter the salary: ";
        cin>>salary;
    }
    void display()
    {
        cout<<"name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Date of joining: "<<date<<endl;
    }
};

int main()
{
   int i,n;
   cout<<"How many Employee: ";
   cin>>n;
    bank b[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter the information for employee["<<i+1<<"]: "<<endl;
        b[i].get();
    }
     for(i=0;i<n;i++)
    {
        cout<<"Employee["<<i+1<<"]: "<<endl;
        b[i].display();
    }
}
