#include<iostream>
using namespace std;
class account
{
private:
    double balance,accountno;
public:
    void initial(double x,double y)
    {
        balance=x;
        accountno=y;
    }
    int getbalance()
    {
        return balance;
    }
    int getaccount()
    {
        return accountno;
    }
    friend void transfer(account &f,account &s,double x)
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

};



int main()
{
    account f,s;
    f.initial(1000,123);
    s.initial(5000,456);
    cout<<"Before transaction:"<<endl;
    cout<<"Account no of f: "<<f.getaccount()<<endl;
    cout<<"Balance of f: "<<f.getbalance()<<endl;
    cout<<"Account no of s: "<<s.getaccount()<<endl;
    cout<<"Balance of s: "<<s.getbalance()<<endl;
    transfer(f,s,500);
    cout<<"After transaction:"<<endl;
    cout<<"Account no of f: "<<f.getaccount()<<endl;
    cout<<"Balance of f: "<<f.getbalance()<<endl;
    cout<<"Account no of s: "<<s.getaccount()<<endl;
    cout<<"Balance of s: "<<s.getbalance()<<endl;
}
/*void transfer(account &f,account &s,double x)
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
 }*/
