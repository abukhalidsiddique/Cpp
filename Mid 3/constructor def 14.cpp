#include<iostream>
using namespace std;
class student
{
private:
           string name,id;
           double phone;
public:

           student (double p=1000)
           {
               cin.ignore();
               cout<<"ENter name: ";
               getline(cin,name);
               cout<<"ENter id: ";
               getline(cin,id);
            phone=p;
           }
           void show()
           {
               cout<<"name: "<<name<<endl;
                 cout<<"id: "<<id<<endl;
                   cout<<"phone: "<<phone<<endl;
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

