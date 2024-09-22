#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int age;
    int id;

    public:
    void get(string x,int y,int z)
    {
        name=x;
        age=y;
        id=z;
    }
    void print()
    {
        cout<<"name: "<<name<<endl<<"age: "<<age<<endl<<"id: "<<id<<endl;
    }
};
int main()
{
    student s;
    s.get("abu",24,22203047);
    s.print();
}
