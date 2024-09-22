#include<iostream>
using namespace std;
class person
{
private:
    string name,address,acctype;
    double balance,transaction;
public:
    void get()
    {
         cin.ignore();
         cout<<"Enter the name: ";
         getline(cin,name);
         cout<<"Enter the address: ";
         getline(cin,address);
         cout<<"Enter the accoutn type: ";
         getline(cin,acctype);
         cout<<"Enter the balance: ";
         cin>>balance;
           cin.ignore();
    }
    void show()
    {
         cout<<"name: "<<name<<endl;
         cout<<"address: "<<address<<endl;
         cout<<"account type: "<<acctype<<endl;
         cout<<"balance: "<<balance<<endl;

    }
};

int main()
{
    int n,i;
    cout<<"how many person? :";
    cin>>n;
     person p[n];
    for(i=0;i<n;i++)
    {
        cout<<"person ["<<i+1<<"]: "<<endl;
         p[i].get();
    }
    for(i=0;i<n;i++)
    {
        cout<<"person ["<<i+1<<"]: "<<endl;
        p[i].show();
    }
}


