#include<iostream>
using namespace std;
class student
{
    public:
    int age;
    string name;
    student(int x, string y)
    {
        age=x;
        name=y;
    }
    void display()
    {
        cout<<"age: "<<age<<" "<<"name: "<<name<<endl;
    }

};
int main()
{
    student s1(24,"abu"),s2(25,"khalid");
    s1.display();
    s2.display();
}
