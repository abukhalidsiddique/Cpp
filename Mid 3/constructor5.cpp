#include<iostream>
#include<string>
using namespace std;
int n;
class person
{
private:
    string name,id,mobile;
    double salary;
public:
    person(string x="22203047")
    {
        cin.ignore();
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter the mobile no: ";
        getline(cin,mobile);
        cout<<"Enter the salary: ";
        cin>>salary;
        id=x;

    }
       void show();
       friend person change(person a[],string s);

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
   int i;
   cout<<"HOW MANY PERSON:: ";
   cin>>n;
   person p[n];
   for(i=0;i<n;i++)
   {
       cout<<"PERSON "<<i+1<<":"<<endl;
       p[i].show();
   }
   string str;
   cout<<"Search name: ";
   cin.ignore();
   getline(cin,str);
   person q=change(p,str);
   q;
   q.show();
}

  person change(person a[],string s)
  {
      int i;
      for(i=0;i<n;i++)
      {
          if(a[i].name==s)
          {
              return a[i];
          }
      }
  }
