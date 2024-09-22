#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int id;
public:
    student()
    {
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter the id: ";
        cin>>id;
        cin.ignore();
    }
     void give()
     {
         cout<<"NAME:"<<name<<endl;
         cout<<"ID:"<<id<<endl<<endl;
     }
};
int main()
{
    int i,n;
    cout<<"HOW MANY STUDENT:: ";
    cin>>n;
    cin.ignore();
    student s[n];
    for(i=0;i<n;i++)
    {
       cout<<"STTUDENT ROLL:: "<<i+1<<"::: "<<endl;
        s[i].give();
    }
}


