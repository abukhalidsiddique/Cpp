#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
    string Name, Address, TypeOfAccount;
    double Balance;
public:
    string AccountNo="BA";
    void get(int n)
    {
        int temp=1000+n;
        string s=to_string(temp);
        AccountNo=AccountNo+s;
        cout<<"Enter the Name: ";
        getline(cin, Name);
        cin.ignore();
        cout<<"Enter the Address: ";
        getline(cin, Address);
        cout<<"Enter the Type of Account: ";
        cin>>TypeOfAccount;
        cout<<"Enter the Initial Balance: ";
        cin>>Balance;
        cin.ignore();
    }
    void put()
    {
        cout<<"AccountNo: "<<AccountNo<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"Address: "<<Address<<endl;
        cout<<"Type of Account: "<<TypeOfAccount<<endl;
        cout<<"Balance: "<<Balance<<endl;
    }
    void Deposit(int x)
    {
        Balance+=x;
        put();
    }
     void Withdraw(int x)
    {
        Balance-=x;
        put();
    }
    void UpdateAddress(string addr)
    {
        Address=addr;
        put();
    }
};
int main()
{
    BankAccount b[3];
    int NoT=0;
    for(int i=0; i<3; i++)
    {
        b[i].get(i);
    }
    b[1].put();
    NoT++;
    b[2].Deposit(500);
    NoT++;
    b[0].Withdraw(500);
    NoT++;
    b[0].UpdateAddress("USA");
    cout<<NoT;
    return 0;
}







