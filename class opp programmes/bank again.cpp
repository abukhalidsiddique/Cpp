#include<iostream>
using namespace std;
class bank
{
private:
    string accno;
    double balance;
public:
    bank(string a,double b)
    {
      accno=a;
      balance=b;
    }
     string geta()
    {
        return accno;
    }
     double getm()
    {
        return balance;
    }
    friend void ch(bank &a,bank &b,int x);
};
 void ch(bank &a,bank &b,int x)
 {
     if(a.balance<x)
         cout<<"Error"<<endl;
         else
         {
             a.balance-=x;
             b.balance+=x;
         }
 }

 int main()
 {
     bank a("ac1",1000),b("acc2",5000);
     cout<<"Before transaction"<<endl;
     cout<<"Acc no: "<<a.geta()<<endl;
      cout<<"balance: "<<a.getm()<<endl;
       cout<<"Acc no: "<<b.geta()<<endl;
        cout<<"balance: "<<b.getm()<<endl;
          ch(a,b,500);
          cout<<"after transaction"<<endl;
     cout<<"Acc no: "<<a.geta()<<endl;
      cout<<"balance: "<<a.getm()<<endl;
       cout<<"Acc no: "<<b.geta()<<endl;
        cout<<"balance: "<<b.getm()<<endl;
 }
