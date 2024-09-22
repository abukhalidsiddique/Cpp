#include<iostream>
using namespace std;
class employee
{
private:

    string name,date_of_joinning;
    double salary;
public:
    void get()
    {
        cin.ignore();
        cout<<"Enter name: ";
        getline(cin,name);
        cout<<"Enter date of joinning: ";
        getline(cin,date_of_joinning);
        cout<<"Enter salary: ";
        cin>>salary;
        cin.ignore();
    }
    void show()
    {
        cout<<"name: "<<name<<endl;
        cout<<"salary: "<<salary<<endl;
        cout<<"date of joinnong: "<<date_of_joinning<<endl;
    }

};
int main()
{
   int i,n;
   cout<<"Enter the employee: ";
   cin>>n;
    employee e[n];
     for(i=0;i<n;i++)
    {
        cout<<"Employee ["<<i+1<<"]: "<<endl;
        e[i].get();
    }
    for(i=0;i<n;i++)
    {
        cout<<"Employee ["<<i+1<<"]: "<<endl;
        e[i].show();
    }
}
