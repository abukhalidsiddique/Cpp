#include<iostream>
#include<string.h>
using namespace std;
class person
{
public:
    string name,address,telephone,mobile,head;
public:
    void get()
    {
         cin.ignore();
         cout<<"Enter the name: ";
         getline(cin,name);
         cout<<"Enter the address: ";
         getline(cin,name);
         cout<<"Enter the telephone: ";
         getline(cin,name);
         cout<<"Enter the mobile: ";
         getline(cin,name);
         cout<<"Enter the head: ";
         getline(cin,name);

    }
    void show()
    {
     cout<<"name: "<<name<<endl;
       cout<<"address: "<<address<<endl;
        cout<<"tele: "<<telephone<<endl;
         cout<<"mob: "<<mobile<<endl;
          cout<<"head: "<<head<<endl;

    }
};

int main()
{
    int n,i;
    cout<<"how many employee? :";
    cin>>n;
     person a[n];
    for(i=0;i<n;i++)
    {
         cout<<"Person ["<<i+1<<"]: "<<endl;
         a[i].get();
    }
    for(i=0;i<n;i++)
    {
        cout<<"Person ["<<i+1<<"]: "<<endl;
         a[i].show();
    }
}
