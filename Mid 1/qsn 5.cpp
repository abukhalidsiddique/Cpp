#include<iostream>
using namespace std;
int n;
class shop
{
private:
    string name;
    int quantity;
    double price;
    public:
    shop()
    {
        cin.ignore();
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter the quantity: ";
        cin>>quantity;
        cout<<"Enter the price: ";
        cin>>price;
    }
    void show()
    {
        cout<<"name: "<<name<<endl;
          cout<<"quantity: "<<quantity<<endl;
            cout<<"price: "<<price<<endl;
              //cout<<"name: "<<name<<endl;
    }
    friend double total(shop s[])
    {
        int i;
        double sum=0;
        for(i=0;i<n;i++)
        {
            sum+=s[i].quantity*s[i].price;
        }
        return sum;
    }
};
int main()
{
   cout<<"enter the n: ";
   cin>>n;
   shop s[n];
   for(int i=0;i<n;i++)
   {
       cout<<"Product: "<<i+1<<endl;
       s[i].show();
   }
   cout<<"Total price: "<<total(s)<<endl;
}
