#include<iostream>
using namespace std;
class employee
{
private:
    string name,address;
    int age;
    double salary;
public:
    void get()
    {
        cin.ignore();
        cout<<"Enter name: ";
        getline(cin,name);
         cout<<"Enter address: ";
        getline(cin,address);
         cout<<"Enter age: ";
        cin>>age;
         cout<<"Enter salary: ";
        cin>>salary;
    }
    void show()
    {
        cout<<"Name: "<<name<<endl;
         cout<<"address: "<<address<<endl;
          cout<<"age: "<<age<<endl;
           cout<<"salary: "<<salary<<endl;
    }

};

int main()
{
   int i,n;
   cout<<"How many employee: ";
   cin>>n;
    employee e[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter information of employee "<<i+1<<": "<<endl;
        e[i].get();
    }
     for(i=0;i<n;i++)
    {
        cout<<"employee "<<i+1<<": "<<endl;
        e[i].show();
    }
}
