  #include<iostream>
 #include<string.h>
using namespace std;
class account
{
private:
    double balance;
    string accountno;
public:
    void initial()
    {
         cout<<"Enter the account no:: ";

         getline(cin,accountno);
         cout<<"Enter the balance:: ";
         cin>>balance;cin.ignore();
    }
    int getbalance()
    {
        return balance;
    }
    string getaccount()
    {
        return accountno;
    }
    friend void transfer(account &f,account &s,double x);

};

void transfer(account &f,account &s,double x)
 {
     if(f.balance<=x)
     {
         cout<<"ERROR"<<endl;
     }
     else
     {
         f.balance-=x;
         s.balance+=x;
     }
 }

int main()
{
    account f,s;
    cout<<"Enter the information of f::"<<endl;
    f.initial();
    cout<<"Enter the information of s::"<<endl;
    s.initial();
    cout<<"Before transaction:"<<endl;
    cout<<"Account no of f: "<<f.getaccount()<<endl;
    cout<<"Balance of f: "<<f.getbalance()<<endl;
    cout<<"Account no of s: "<<s.getaccount()<<endl;
    cout<<"Balance of s: "<<s.getbalance()<<endl;
    double x;
    cout<<"How many u want to transfer::: "<<endl;
    cin>>x;
    transfer(f,s,x);
    cout<<"After transaction:"<<endl;
    cout<<"Account no of f: "<<f.getaccount()<<endl;
    cout<<"Balance of f: "<<f.getbalance()<<endl;
    cout<<"Account no of s: "<<s.getaccount()<<endl;
    cout<<"Balance of s: "<<s.getbalance()<<endl;
}
