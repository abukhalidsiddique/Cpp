#include<iostream>
using namespace std;
class balance
{
public:
        double money;
public:
    void get();
    void show();

    void calculate(balance x,balance y)
    {
        int temp,onethousand,fivehundred,onehundred;
        temp=x.money+y.money;
        onethousand=temp/1000;
        temp=temp%1000;
        fivehundred=temp/500;
        temp=temp%500;
        onehundred=temp/100;
        temp=temp%100;
        cout<<"one thousand= "<<onethousand<<endl;
        cout<<"five hundred= "<<fivehundred<<endl;
        cout<<"One hundred= "<<onehundred<<endl;
        cout<<"remainder: "<<temp<<"taka"<<endl;
    }
};

void balance::get()
{
    cout<<"Enter the money: ";
    cin>>money;
}
void balance::show()
{
    cout<<"Money: "<<money<<endl;
}
int main()
{
    balance a,b,total;
    cout<<"Enter money for a: "<<endl;
    a.get();
    cout<<"Enter money for b: "<<endl;
    b.get();
    cout<<"money of a: "<<endl;
    a.show();
    cout<<"money of b: "<<endl;
    b.show();
    cout<<"Total amount: "<<a.money+b.money<<endl;

    total.calculate(a,b);

}
