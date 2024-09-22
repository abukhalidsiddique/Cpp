
#include<iostream>
using namespace std;
class television
{
private:
    string  brand, model;
     float price;
public:
    television(string a,string b,float p)
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
       television t("Sony","LCD",45000);
     t.give();
    return 0;
}




