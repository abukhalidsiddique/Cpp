#include<iostream>
using namespace std;
class Bank
{
private:
    string name;
public:
    Bank(string n)
    {
        name=n;
    }
    void give()
    {
        cout<<"name: "<<name<<endl;
    }
};
int main()
{
    Bank b("Shonali");
    b.give();
    return 0;
}


