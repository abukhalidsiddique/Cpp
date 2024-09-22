#include<iostream>
using namespace std;
class fruit
{
private:
    string  name, colour;

public:
    fruit(string a,string b)
    {
          name=a;
          colour=b;
    }
    void give()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"colour: "<<colour<<endl;

    }
};
int main()
{
     fruit f("Mango","Red");
     f.give();
    return 0;
}



