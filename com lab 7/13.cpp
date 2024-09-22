#include<iostream>
using namespace std;
class computer
{
private:
    string  brand, model;
     float price;
public:
    computer(string a,string b,float p)
    {
           brand=a;
           model=b;
           price=p;
    }
    void give()
    {
        cout<<"Brand: "<<brand<<endl;
        cout<<"model: "<<model<<endl;
         cout<<"Price: "<<price<<endl;

    }
};
int main()
{
       computer c("HP","Pavilion",55000);
     c.give();
    return 0;
}



