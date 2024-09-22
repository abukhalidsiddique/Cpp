#include<iostream>
#include<string.h>
using namespace std;
int n;
class BankAccount
{
 private:
    string name,address,TypeOfAccount;
    double balance;
    int NoT=0;
    string AccountNo="BA";
public:
    void get(int n)
    {
        int temp;
        temp=1000+n;
        string s;
        s=to_string(temp);
        AccountNo=AccountNo+s;
        cout<<"ACCOUNT NO::: "<< AccountNo<<endl;
        cout<<"Enter the Name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter the Address: ";
        getline(cin,address);
        cout<<"Enter the Tyoe of Account: ";
        getline(cin,TypeOfAccount);
        cout<<"Enter the Balance:: ";
        cin>>balance;
        cin.ignore();
        cout<<endl;
    }
    void put()
    {
        cout<<"Account No :::: "<<AccountNo<<endl;
        cout<<"Name :: "<<name<<endl;
        cout<<"Address :: "<<address<<endl;
        cout<<"Type of Account :: "<<TypeOfAccount<<endl;
        cout<<"Balance :: "<<balance<<endl;
        cout<<endl;
    }
    void Deposite()
    {
        cout<<"Deposite Some Money:: "<<endl;
        int money;
        cout<<"How Many You Want TO Deposite::: ";
        cin>>money;
        balance+=money;
        NoT++;
        put();
    }
     void withdraw()
    {
        cout<<"Withdraw Some Money:: "<<endl;
        int money;
        cout<<"How Many You Want To withdraw::: ";
        cin>>money;
        balance-=money;
        NoT++;
        put();
    }
    void UpdateAddress()
    {
        cout<<"Update the Address :: "<<endl;
        cin.ignore();
        getline(cin,address);
        put();
    }

     friend int displayTransaction(BankAccount b[]);
     friend BankAccount ssearch(BankAccount b[],string s);
};
int main()
{
    int i;
    string s;
    cout<<"How many Account::: ";
    cin>>n;
    BankAccount b[n];
    for(i=0;i<n;i++)
    {
        b[i].get(i);
        b[i].put();
        b[i].Deposite();
        b[i].withdraw();
        b[i].UpdateAddress();
    }
    cout<<"Enter Account no:: ";
    cin>>s;
    BankAccount a=ssearch(b,s);
    a.put();
    displayTransaction(b);
    return 0;
}
int displayTransaction(BankAccount b[])
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=b[i].NoT;
    }
    cout<<"Number Of Transactions::: "<<sum<<endl;
}
BankAccount ssearch (BankAccount b[], string s)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(b[i].AccountNo==s)
        {
            return b[i];
            break;
        }
    }
}
