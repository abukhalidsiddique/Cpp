#include<stdio.h>
#include<iostream>
using namespace std;
class student
{
private:
    string name;
public:
    void sset(string x)
    {
        name=x;
    }
    string get()
    {
        return name;
    }
};

int main()
{
    student s1;
    s1.sset("Abu");
    cout<<s1.get();
}
