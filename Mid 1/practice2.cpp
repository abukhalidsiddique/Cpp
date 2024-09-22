#include<iostream>
using namespace std;
class bank
{
private:
    string accno;
    double balance;
public:
    bank(string n,double m)
    {
        accno=n;
        balance=m;
    }
    void show()
    {
        cout<<"acc no: "<<accno<<endl;
        cout<<"balance: "<<balance<<endl;
    }
    friend double transaction(bank &a,bank &b,double m)
    {
        if(a.balance<m)
            cout<<"Error"<<endl;
        else
        {
            a.balance-=m;
            b.balance+=m;
        }
    }
};
int main()
{
    bank a("2222",1000),b("3333",5000);
    a.show();
    b.show();
    transaction(a,b,500);
     a.show();
    b.show();
}
