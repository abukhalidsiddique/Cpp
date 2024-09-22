#include<iostream>
#include<string.h>
using namespace std;
class Bank
{
   public:
    string name,address,acctype;
    double balance,transaction=0;
   public:
    void get()
    {
         cin.ignore();
        cout<<"Enter the name of dipositor: ";
        getline(cin,name);
        cout<<"Enter the address of dipositor: ";
        getline(cin,address);
        cout<<"Enter the type of account: ";
        getline(cin,acctype);
        cout<<"Enter the Balance: ";
        cin>>balance;
            cin.ignore();
    }
      void show()
      {
          cout<<"The name of dipositor: "<<name<<endl;
          cout<<"The address of dipositor: "<<address<<endl;
          cout<<"The type of account: "<<acctype<<endl;
          cout<<"The Balance: "<<balance<<endl;
      }
       void diposite_more()
       {
         int money;
          cout<<"How Much Do You Want To Diposite: ";
          cin>>money;
           balance+=money;
           show();
        }
         void withdraw()
       {
         int money;
          cout<<"How Much Do You Want To Withdraw: ";
          cin>>money;
           balance-=money;
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
    int n,i;
    cout<<"How many Dipositors? : ";
    cin>>n;
    Bank b[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter Details of Account No:::  BA100"<<i<<endl;
        b[i].get();
        cout<<"Details of Account No:::  BA100"<<i<<endl;
        b[i].show();
        cout<<"Diposite More Money in Account No:::  BA100"<<i<<endl;
        b[i].diposite_more();
         cout<<"Withdraw Some Money From Account No:::  BA100"<<i<<endl;
        b[i].withdraw();
         cout<<"Change The Address of Account No:::  BA100"<<i<<endl;
        b[i].change_address();
    }
}
