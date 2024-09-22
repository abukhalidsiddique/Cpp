#include<iostream>
using namespace std;
int n;
class student
{
    private:
    string name,id;
    public:
        student ();
        void open()
        {
             cin.ignore();
            cout<<"Enter the Name: ";
            getline(cin,name);
            cout<<"Enter the id: ";
            getline(cin,id);
        }
        void show();
        friend student check(student s[],string str);
};
void student::show()
{
    cout<<"name: "<<name<<endl;
    cout<<"id: "<<id<<endl;
}
student::student()
{
            cin.ignore();
            cout<<"Enter the Name: ";
            getline(cin,name);
            cout<<"Enter the id: ";
            getline(cin,id);
}
student check(student s[],string str)
{
    for(int i=0;i<n;i++)
    {
        if(s[i].id==str)
        {
            return s[i];
        }
    }
}

int main()
{
    cout<<"Enter the number of students: ";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        s[i].show();
    }
   string str;
   cout<<"check id: ";
    getline(cin,str);
    student s1=check(s,str);
    s1.open();
    s1.show();

}
