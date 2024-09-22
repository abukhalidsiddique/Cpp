#include<iostream>
using namespace std;
class bank
{
private:
    string acc;
    double balance;
public:
    bank(string x,double y)
    {
        acc=x;
        balance=y;
    }
    string getacc()
    {
        return acc;
    }
    double getbalance()
    {
        return balance;
    }
    friend void ret(bank &b1,bank &b2, double m);
};

int main()
{
    bank b1("Account 1",1000);
    bank b2("Account 2",2000);
    cout<<"Account no of b1: "<<b1.getacc()<<endl;
    cout<<"Balance of b1: "<<b1.getbalance()<<endl;
    cout<<"Account no of b2: "<<b2.getacc()<<endl;
    cout<<"Balance of b2: "<<b2.getbalance()<<endl;
    ret(b1,b2,500);
    cout<<"Account no of b1: "<<b1.getacc()<<endl;
    cout<<"Balance of b1: "<<b1.getbalance()<<endl;
    cout<<"Account no of b2: "<<b2.getacc()<<endl;
    cout<<"Balance of b2: "<<b2.getbalance()<<endl;
}

void ret(bank &b1,bank &b2, double m)
{
    if(b1.balance<m)
    {
        cout<<"Error";
    }
    else
    {
        b1.balance-=m;
        b2.balance+=m;
    }
}
