
#include<iostream>
using namespace std;
class Bicycle
{
private:
    string  brand, model;
     float price;
public:
    Bicycle(string a,string b,float p)
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
       Bicycle b("Max","horse",45000);
     b.give();
    return 0;
}



