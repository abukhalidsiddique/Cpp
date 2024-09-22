#include<iostream>
using namespace std;
int n;
class bank
{
private:
    string name,address,phone,accountno="BA";
    double balance;
    int transaction=0;
public:
    void input(int i);
    void output();
    void deposite();
    void withdraw();
    void changeaddress();
    friend int transfer(bank b[]);
    friend bank acc(bank b[],string str);
};
void bank::input(int i)
{
    int s=1000+i;
    string str=to_string(s);
    accountno+=str;
    cin.ignore();
    cout<<"Enter the name: ";
    getline(cin,name);
    cout<<"Enter the address: ";
    getline(cin,address);
    cout<<"Enter the phone: ";
    getline(cin,phone);
    cout<<"Enter the balance: ";
    cin>>balance;
}
void bank::output()
{
    cout<<"account no: "<<accountno<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"address: "<<address<<endl;
    cout<<"phone: "<<phone<<endl;
    cout<<"balance: "<<balance<<endl;
}
void bank:: deposite()
{
    double money;
    cout<<"how much deposite: ";
    cin>>money;
    balance+=money;
    transaction++;
    output();
}
void bank:: withdraw()
{
    double money;
    cout<<"how much withdraw: ";
    cin>>money;
    balance-=money;
    transaction++;
    output();
}
void bank:: changeaddress()
{
    cout<<"Change the address: ";
    cin.ignore();
    getline(cin,address);
    output();
}
int main()
{
    cout<<"How many depositors: ";
    cin>>n;
    bank b[n];
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Depositor: "<<i+1<<"  ACC No: BA100"<<i<<endl;
        b[i].input(i);
        b[i].output();
        b[i].deposite();
        b[i].withdraw();
        b[i].changeaddress();
    }

    string s;
    cout<<"Enter your searching account: ";
    getline(cin,s);
    bank c=acc(b,s);
    c.output();
    c.deposite();
    c.withdraw();
    c.changeaddress();
    c.output();

    cout<<"Total Transactions: "<<transfer(b)<<endl;

}


bank acc(bank b[],string str)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(b[i].accountno==str)
            return b[i];
    }
}

int transfer(bank b[])
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=b[i].transaction;
    }
      return sum;
}
