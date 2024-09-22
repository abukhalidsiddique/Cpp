#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int id;
    int age;
public:
    void get(string x,int y,int z)
    {
        name=x;
        id=y;
        age=z;
    }
    void print()
    {
        cout<<name<<endl<<id<<endl<<age;
    }
};
int main()
{
    student s1;
    s1.get("abu", 22203047, 24);
    s1.print();
}
