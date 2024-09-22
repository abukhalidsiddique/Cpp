#include<iostream>
using namespace std;
class car
{
private:
    string make,model;
public:
    car(string m,string n)
    {
        make=m;
        model=n;
    }
    void show()
    {
        cout<<"make: "<<make<<endl;
        cout<<"model: "<<model<<endl;
    }
    ~car()
    {
        cout<<"cons"<<endl;
    }
};
int main()
{
    car a("america","BMW");
    a.show();
}
