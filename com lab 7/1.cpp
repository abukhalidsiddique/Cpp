#include<iostream>
using namespace std;
class person
{
private:
    string name;
        int age;
public:
    person(string n,int a)
    {
        name=n;
        age=a;
    }
    void give()
    {
        cout<<"Name: "<<name<<endl;
         cout<<"Age: "<<age<<endl;
    }
};
int main()
{
    person p("Asif",24);
    person q("Khalid",24);
    p.give();
    q.give();
    return 0;
}
