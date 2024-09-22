#include<iostream>
#include<string>
using namespace std;
class student
{
public:
    string name;
    student(string x)
    {
        name=x;
    }
    void fun()
    {
        cout<<name;
    }
};
int main()
{
    student s1("ABU");
    s1.fun();
}
