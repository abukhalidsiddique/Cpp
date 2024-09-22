#include<iostream>
using namespace std;
class employee
{
   public:
    string name;
    int age;
    int id;
    void display()
    {
        cout<<name<<" "<<age<<" "<<id;
    }
    employee(string x,int y,int z)
    {
        name=x;
        age=y;
        id=z;
    }
};
int main()
{
    employee s1("ABU",45,6767);
    s1.display();
}
