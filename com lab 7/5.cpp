#include<iostream>
using namespace std;
class BankAccount
{
private:
    string accno;
        float balance;
public:
    BankAccount(string n,float b)
    {
        accno=n;
        balance=b;

    }
    void give()
    {
        cout<<"Account Number: "<<accno<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main()
{
    BankAccount B("22203047",5677.8);
    B.give();
    return 0;
}

