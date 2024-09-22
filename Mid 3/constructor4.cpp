#include<iostream>
using namespace std;
class person
{
private:
    string name,id,mobile;
    double salary;
public:
    person()
    {
        cin.ignore();
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter the id no: ";
        getline(cin,id);
        cout<<"Enter the mobile no: ";
        getline(cin,mobile);
        cout<<"Enter the salary: ";
        cin>>salary;

    }
       void show();

};
void person::show()
       {
           cout<<"name: "<<name<<endl;
            cout<<"id: "<<id<<endl;
             cout<<"mobile: "<<mobile<<endl;
              cout<<"salary: "<<salary<<endl;
       }

int main()
{
   int i,n;
   cout<<"HOW MANY PERSON:: ";
   cin>>n;
   person p[n];
   for(i=0;i<n;i++)
   {
       cout<<"PERSON "<<i+1<<":"<<endl;
       p[i].show();
   }
}

