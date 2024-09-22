#include<iostream>
using namespace std;
int n, transaction=0;
class bank
{
private:
    string name,address,type,accno="BA";
    double balance;
public:
    void get(int i)
    {
        string n=to_string(1000+i);
        accno+=n;
        cin.ignore();
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter the address: ";
        getline(cin,address);
        cout<<"Enter the account type: ";
        getline(cin,type);
        cout<<"Enter the balance: ";
        cin>>balance;
    }

    void show()
    {
        cout<<"Account no: "<<accno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Account type: "<<type<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    void deposite()
    {
        double m;
        cout<<"How much you want to diposite: ";
        cin>>m;
        balance+=m;
        transaction++;
        show();
    }
    void withdraw()
    {
        double m;
        cout<<"How much you want to withdraw: ";
        cin>>m;
        balance-=m;
        transaction++;
        show();
    }
    void Address()
    {
        cin.ignore();
        cout<<"Change the address: ";
        getline(cin,address);
        show();
    }
    friend bank change(bank b[],string a);
};

int main()
{
   int i;
    cout<<"How many dipositor: ";
    cin>>n;
    bank b[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter the information for account "<<i+1<<": "<<endl;
        b[i].get(i);
        b[i].show();
        b[i].deposite();
        b[i].withdraw();
        b[i].Address();
    }
    string a;
    cout<<"Which account you are searching: ";
    getline(cin,a);
    bank c=change(b,a);
    c.show();
    c.deposite();
    c.withdraw();
    c.Address();

    cout<<"Total transactions: "<<transaction<<endl;
}

bank change(bank b[],string a)
{
      for(int i=0;i<n;i++)
      {
          if(b[i].accno==a)
            return b[i];
      }
}
