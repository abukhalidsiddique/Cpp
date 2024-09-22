#include<iostream>
using namespace std;
class restaursnt
{
private:
    string  name,cuisin;
public:
    restaursnt(string a,string b)
    {
           name=a;
           cuisin=b;
    }
    void give()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Cuisin: "<<cuisin<<endl;
    }
};
int main()
{
       restaursnt r("KFC","Boofe");
     r.give();
    return 0;
}



