#include<iostream>
using namespace std;
class student
{
protected:
    string name,id;
public:
    student()
    {
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter the id: ";
        getline(cin,id);
    }
    void show()
    {
        cout<<"NAME: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }
};
class employee:public student
{
   protected:
       int phone;

  public:
      employee()
  {
      cout<<"Enter the phone number: ";
      cin>>phone;
      cin.ignore();
  }
    void show()
    {
        cout<<"NAME: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"PHONE: "<<phone<<endl;
    }
};
class man: public employee
{
protected:
    string address;
public:
    man()
    {
        cout<<"Enter the adddresss: ";
        getline(cin,address);
    }
    void show()
    {
        cout<<"NAME: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"PHONE: "<<phone<<endl;
        cout<<"ADDRESS: "<<address<<endl;
    }

};

int main()
{
   student s1;
   cout<<"For student: "<<endl;
   s1.show();
   employee e1;
   cout<<"For employee: "<<endl;
   e1.show();
   man m1;
   cout<<"For man: "<<endl;
   m1.show();

}

