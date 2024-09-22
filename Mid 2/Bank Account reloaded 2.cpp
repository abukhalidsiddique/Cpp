#include<iostream>
#include<string.h>
using namespace std;
int n,transaction=0;
class bank
{
private:
    string name,address,type,AccountNo="BA";
    double balance;

public:
    void input(int x)
    {
        int a=1000+x;
        string s=to_string(a);
        AccountNo=AccountNo+s;
        cout<<"Enter the name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter the address: ";
        getline(cin,address);
        cout<<"Enter the Type: ";
        getline(cin,type);
        cout<<"Enter the balance: ";
        cin>>balance;
        cin.ignore();
    }
    void output()
    {
        cout<<endl;
        cout<<"Account No: "<<AccountNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Type of account: "<<type<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<endl;
    }
    void deposite()
    {
        double money;
        cout<<"How many you want to deposite: ";
        cin>>money;
        balance+=money;
        transaction++;
        output();
    }
    void withdraw()
    {
        double money;
        cout<<"How many you want to withdraw: ";
        cin>>money;
        balance-=money;
        transaction++;
        output();
    }
    void changeAddress()
    {
        cout<<"Change the address:: ";
        cin.ignore();
        getline(cin,address);
        output();
    }
    friend bank ssearch(bank b[],string s);
};
int main()
{
   int i;
    cout<<"How many account: ";
    cin>>n;
    bank b[n];
    for(i=0;i<n;i++)
    {
       b[i].input(i);
       b[i].output();
       b[i].deposite();
       b[i].withdraw();
       b[i].changeAddress();
    }
    string s;
    cout<<"Search an account: ";
    cin>>s;
    bank a=ssearch(b, s);
    a.output();
    a.deposite();
    a.withdraw();
    a.changeAddress();
    cout<<"Number of total transactions: "<<transaction<<endl;
}

bank ssearch(bank b[], string s)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(b[i].AccountNo==s)
        {
            return b[i];
        }
    }
}





