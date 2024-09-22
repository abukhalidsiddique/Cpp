#include<iostream>
using namespace std;
class student
{
private:
           string name,id;
           double phone;
public:

           student ()
           {
                 cin.ignore();
               cout<<"ENter name: ";
               getline(cin,name);
               cout<<"ENter id: ";
               getline(cin,id);
               cout<<"ENter the phn: ";
               cin>>phone;
           }
           void show()
           {
               cout<<"name: "<<name<<endl;
                 cout<<"id: "<<id<<endl;
                   cout<<"phpne: "<<phone<<endl;
           }
};

int main()
{
    int i,n;
    cout<<"How many student: ";
    cin>>n;
    student s[n];
    for(i=0;i<n;i++)
    {
        s[i].show();
    }
}
