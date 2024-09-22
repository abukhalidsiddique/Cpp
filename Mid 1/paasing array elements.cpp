#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
  int id;
    string name;
  public:
   void getdata();
   void putdata();
};
void Employee::getdata()
{
  cout << "Enter Id : ";
    cin>>id;
  cout << "Enter Name : ";
   cin.ignore();
   getline(cin,name);
}
void Employee::putdata()
{
  cout << id << " ";
  cout << name << " ";
  cout << endl;
}

int main()
{
  Employee emp[30];
  int n, i;
  cout << "Enter Number of Employees - ";
  cin >> n;
  for(i = 0; i < n; i++)
    {
        cout<<"man["<<i<<"]: "<<endl;
        emp[i].getdata();
        }

  for(i = 0; i < n; i++)
   {
               cout<<"man["<<i<<"]: "<<endl;
        emp[i].putdata();
   }
}
