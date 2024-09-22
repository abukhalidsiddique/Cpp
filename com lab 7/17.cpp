
#include<iostream>
using namespace std;
class productreview
{
private:
    string name,rev;
public:
   productreview(string n,string r)
    {
         name=n;
          rev=r;
    }
    void give()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Prodect Review: "<<rev<<endl;
    }
};
int main()
{
   productreview p("Chocolates","Good");
    p.give();
    return 0;
}


