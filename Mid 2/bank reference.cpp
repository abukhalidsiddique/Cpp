#include<iostream>
using namespace std;
class bank
{
private:
    string account_no;
    double balance;
public:
    void input(string acc,double money)
    {
        account_no=acc;
        balance=money;
    }
    string getaccount()
    {
        return account_no;
    }
    double getbalance()
    {
        return balance;
    }
    friend void transfer(bank &a,bank &b,int c);
};

void transfer(bank &a,bank &b,int c)
{
   if(c>a.balance)
    cout<<"Error"<<endl;
    else
    {
        a.balance-=c;
        b.balance+=c;
    }

}

int main()
{
bank b1,b2;
b1.input("22203047",1000);
b2.input("22203048",2000);
cout<<"BEFORE TRANSACTON: "<<endl;
cout<<"Account no of b1: "<<b1.getaccount()<<endl;
cout<<"Balance of b1: "<<b1.getbalance()<<endl;
cout<<"Account no of b2: "<<b2.getaccount()<<endl;
cout<<"Balance of b2: "<<b2.getbalance()<<endl;
transfer(b1,b2,500);
cout<<"After TRANSACTON: "<<endl;
cout<<"Account no of b1: "<<b1.getaccount()<<endl;
cout<<"Balance of b1: "<<b1.getbalance()<<endl;
cout<<"Account no of b2: "<<b2.getaccount()<<endl;
cout<<"Balance of b2: "<<b2.getbalance()<<endl;
}
