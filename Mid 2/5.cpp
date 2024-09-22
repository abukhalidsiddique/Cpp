#include<iostream>
using namespace std;
class person
{
private:
    string name,address,telephone,mobile,head;
public:
    void get()
    {
         cin.ignore();
         cout<<"Enter the name: ";
         getline(cin,name);
         cout<<"Enter the address: ";
         getline(cin,address);
         cout<<"Enter the telephone no: ";
         getline(cin,telephone);
         cout<<"Enter the mobile no: ";
         getline(cin,mobile);
         cout<<"Enter the head of the family: ";
         getline(cin,head);
      cin.ignore();
    }
    void show()
    {
         cout<<"name: "<<name<<endl;
         cout<<"address: "<<address<<endl;
         cout<<"telephone: "<<telephone<<endl;
         cout<<"mobile: "<<mobile<<endl;
         cout<<"head: "<<head<<endl;
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

