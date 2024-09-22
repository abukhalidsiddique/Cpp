#include<iostream>
using namespace std;
class product
{
private:
    string name;
      float price;
       int quantity;
public:
    product(string n,float p,int q)
    {
         name=n;
         price=p;
         quantity=q;
    }
    void give()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Quantity: "<<quantity<<endl;
    }
};
int main()
{
    product b("Mobile",45000,2);
    b.give();
    return 0;
}

