#include<iostream>
using namespace std;
class student
{
    private:
    string name,address,BG,phone;
    int id;
    public:
        void input()
        {
            cout<<"Enter the name: ";
             cin>>name;
             cout<<"Enter the address: ";
            cin>>address;
             cout<<"Enter the BG: ";
            cin>>BG;
             cout<<"Enter the phone: ";
            cin>>phone;
            cout<<"Enter the id: ";
            cin>>id;
        }
        void output()
        {
        cout<<"Name: "<<name<<endl;
          cout<<"Address: "<<address<<endl;
          cout<<"BG: "<<BG<<endl;
          cout<<"Phone: "<<phone<<endl;
          cout<<"ID: "<<id<<endl;
        }
};

int main()
{

    int n;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Student ["<<i+1<<"]"<<endl;
        s[i].input();
    }
    for(int i=0;i<n;i++)
    {
         cout<<"Student ["<<i+1<<"]"<<endl;
        s[i].output();
    }
}
