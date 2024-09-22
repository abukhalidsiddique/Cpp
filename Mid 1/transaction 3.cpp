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
    friend void transfer(account a[],double x);
    friend account change(account a[],string str);

};

void transfer(account a[],double x)
 {
     if(a[0].balance<=x)
     {
         cout<<"ERROR"<<endl;
     }
     else
     {
         a[0].balance-=x;
         a[1].balance+=x;
     }
 }

int main()
{
    account a[2];
    cout<<"Enter the information of f a[0]:"<<endl;
    a[0].initial();
    cout<<"Enter the information of a[1]:"<<endl;
    a[1].initial();
    cout<<"Before transaction:"<<endl;
    cout<<"Account no of a[0]: "<<a[0].getaccount()<<endl;
    cout<<"Balance of a[0]: "<<a[0].getbalance()<<endl;
    cout<<"Account no of a[1]: "<<a[1].getaccount()<<endl;
    cout<<"Balance of a[1]: "<<a[1].getbalance()<<endl;
    double x;
    cout<<"How many u want to transfer::: "<<endl;
    cin>>x;
    transfer(a,x);
    cout<<"After transaction:"<<endl;
    cout<<"Account no of a[0]: "<<a[0].getaccount()<<endl;
    cout<<"Balance of a[0]: "<<a[0].getbalance()<<endl;
    cout<<"Account no of a[1]: "<<a[1].getaccount()<<endl;
    cout<<"Balance of a[1]: "<<a[1].getbalance()<<endl;
    string str;
    cout<<"search account:: ";
    cin>>str;
    account b=change(a,str);
    b.initial();
    cout<<"Account no of b: "<<b.getaccount()<<endl;
    cout<<"Balance of a: "<<b.getbalance()<<endl;
}

 account change( account a[], string str)
 {
     if(a[0].accountno==str)
        return a[0];
     else if(a[1].accountno==str)
        return a[1];
     else
        cout<<"Error"<<endl;
 }
