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
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter the id no: ";
        getline(cin,id);
        cout<<"Enter the mobile no: ";
        getline(cin,mobile);
        cout<<"Enter the salary: ";
        cin>>salary;
        cin.ignore();
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
    person p1,p2;
    cout<<"Informatio for p1:: "<<endl;
    p1.show();
    cout<<"Informatio for p2:: "<<endl;
    p2.show();
}
