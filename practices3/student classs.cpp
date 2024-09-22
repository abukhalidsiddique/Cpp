#include<iostream>

#include<string>
using namespace std;

class student
{


public:
    string name;
    student (string x)  //constructor
    {
        name=x;
    }
    void get()
    {
        cout<<name;
    }

};

int main()
{
    student s1("Abu");
    s1.get();

}
