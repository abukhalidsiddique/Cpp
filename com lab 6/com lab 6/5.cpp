#include<iostream>
#include<string.h>
using namespace std;
class bank
{
private:
    string name,address,acctype;
    double balance,transaction=0;
public:
    void get()
    {
        cin.ignore();
        cout<<"Enter The Name Of The Dipositor: ";
        getline(cin,name);
        cout<<"Enter The address Of The Dipositor: ";
        getline(cin,address);
        cout<<"Enter The Account Type: ";
        getline(cin,acctype);
        cout<<"Enter The Balance: ";
        cin>>balance;

    }
    void show()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Account Type: "<<acctype<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"Transactions: "<<transaction<<endl;
    }
    void diposite()
    {
        double money;
        cout<<"How many you want to diposite: ";
        cin>>money;
        balance+=money;
        transaction++;
        show();
    }
     void withdraw()
    {
        double money;
        cout<<"How many you want to withdraw: ";
        cin>>money;
        balance-=money;
        transaction++;
        show();
    }
    void change_address()
    {
        cout<<"Enter the new address: ";
        cin.ignore();
        getline(cin,address);
        show();
    }
};

int main()
{
    int i,n;
    cout<<"How many dipositors: ";
    cin>>n;
    bank b[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter the details of account ::: BA100"<<i<<endl;
        b[i].get();
        cout<<"The details of account ::: BA100"<<i<<endl;
        b[i].show();
        cout<<"Diposte more money in account ::: BA100"<<i<<endl;
        b[i].diposite();
        cout<<"Withdraw some money from account ::: BA100"<<i<<endl;
        b[i].withdraw();
        cout<<"Change the address of account ::: BA100"<<i<<endl;
        b[i].change_address();
    }
}
