#include<iostream>
using namespace std;
int n;
class student
{
private:
    string name,id,mobile;
    double salary;
public:
    void input()
    {
        cin.ignore();
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter the id: ";
        getline(cin,id);
        cout<<"Enter the mobile no: ";
        getline(cin,mobile);
        cout<<"Enter the salary: ";
        cin>>salary;
    }
    void output();
    friend student change(student a[],string s);
};
void student::output()
{
    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<id<<endl;
    cout<<"Mobile: "<<mobile<<endl;
    cout<<"Salary: "<<salary<<endl;
}
int main()
{
    cout<<"how many students: ";
    cin>>n;
    student s[n];
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"STUDENT "<<i+1<<endl;
        s[i].input();
    }
    for(i=0;i<n;i++)
    {
        cout<<"STUDENT "<<i+1<<endl;
        s[i].output();
    }
    string str;
    cout<<"Enter the searching name: ";
    cin.ignore();
    getline(cin,str);
    student st=change(s,str);
    st.input();
    st.output();
}
student change(student a[],string s)
 {
     for(int i=0;i<n;i++)
     {
         if(a[i].name==s)
            return a[i];
         else
           cout<<"Error";
     }
 }
