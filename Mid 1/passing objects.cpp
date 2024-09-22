#include<iostream>
using namespace std;
int n;
class information
{
private:
        string name,address,id="IUBAT";
public:
       void input(int i);
       void output();
       friend information searching(information a[],string s);
};
void information::input(int i)
{
    int z=2220+i;
    string s=to_string(z);
    id=id+s;
    cin.ignore();
    cout<<"Enter the name: ";
    getline(cin,name);
    cout<<"Enter the address: ";
    getline(cin,address);
}
void information::output()
{
    cout<<"id no: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<address<<endl;
}

int main()
{
   cout<<"How many character: ";
   cin>>n;
   information a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Enter info for serial: "<<i+1<<endl;
        a[i].input(i);
    }
     for(i=0;i<n;i++)
    {
        a[i].output();
    }
   string str;
   cout<<"what id ypu are searching: ";
   getline(cin,str);
   information c=searching(a,str);
    c.output();
}
information searching(information a[],string s)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i].id==s)
        {
            return a[i];
        }
    }
}
