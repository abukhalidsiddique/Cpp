
#include<iostream>
using namespace std;
class car
{
private:
    string make,model;
    int year;
public:
    car(string m1,string m2,int y)
    {
         make=m1;
         model=m2;
         year=y;
    }
    void give()
    {
        cout<<"Make : "<<make<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
    }
};

int main()
{
    car c("China","BMW",2020);
      c.give())
}
