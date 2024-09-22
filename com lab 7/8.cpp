#include<iostream>
using namespace std;
class Animal
{
private:
    string name,species;

public:
    Animal(string n,string m)
    {
        name=n;
        species=m;
    }
    void give()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Species: "<<species<<endl;
    }
};
int main()
{
    Animal B("man","homosapiense");
    B.give();
    return 0;
}


