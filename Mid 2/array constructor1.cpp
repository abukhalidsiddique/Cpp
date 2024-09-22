#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int id;
public:
    student()
    {
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter the id: ";
        cin>>id;
        cin.ignore();
    }
      string retn()
      {
          return name;
      }
       int retid()
      {
          return id;
      }
};
int main()
{
    student s[3];
    for(int i=0;i<3;i++)
    {
        cout<<"NAME: "<<s[i].retn()<<endl;
        cout<<"ID: "<<s[i].retid()<<endl<<endl;
    }
}
