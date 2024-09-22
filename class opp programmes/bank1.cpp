#include<iostream>
using namespace std;
int t=0;
class bank
{
    string name,address,acc="BA";
    double balance;
    int transaction=0;
public:
    void get(int x)
    {
        int a=1000+x;
        acc=acc+to_string(a);
        cin.ignore();
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter the address: ";
        getline(cin,address);
        cout<<"Enter the balance: ";
        cin>>balance;
    }
    void show()
    {
        cout<<"Account no: "<<acc<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    void deposite()
    {
        int money;
        cout<<"How much you want to deposite: ";
        cin>>money;
        balance+=money;
         transaction++;
         t++;
    }
     void withdraw()
    {
        int money;
        cout<<"How much you want to withdraw: ";
        cin>>money;
        balance-=money;
        transaction++;
        t++;
    }
    void ch()
    {
        cin.ignore();
        cout<<"Enter new address: ";
        getline(cin,address);
    }
    friend bank finding(bank a[],int x,string y);
    friend int tran(bank a[],int x);
};

int main()
{
    int i,n;
    cout<<"How many account: ";
    cin>>n;
    bank b[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter info for account "<<i+1<<": "<<endl;
        b[i].get(i);
    }
     for(i=0;i<n;i++)
    {
        cout<<"account "<<i+1<<": "<<endl;
        b[i].show();
    }
    cin.ignore();
    string s;
    cout<<"Enter the searching account: ";
    getline(cin,s);
    bank c= finding(b,n,s);
    c.show();
    c.deposite();
    c.withdraw();
    c.ch();
    c.show();
    cout<<"Total transaction: "<<tran(b,n)<<endl;
     cout<<"Total transaction: "<<t<<endl;
}
bank finding(bank a[],int x,string y)
{
    int i;
    for(i=0;i<x;i++)
    {
        if(a[i].acc==y)
            return a[i];
        else
            cout<<"Error"<<endl;
    }
}
int tran(bank a[],int x)
{
    int i,sum=0;
    for(i=0;i<x;i++)
    {
        sum=sum+a[i].transaction;
    }
    return sum;
}
