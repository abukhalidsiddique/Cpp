#include<iostream>
using namespace std;
class person
{
    char name[30];
    int age;
public:

    void getdata(void);
    void display(void);
};
void person::getdata(void)
{
    cout<<"Enter the name: ";
    cin>>name;
        cout<<"Enter the age: ";
    cin>>age;
}
void person::display(void)
{
    cout<<name<<endl;
    cout<<age<<endl;
}
int main()
{
    person p;
    p.getdata();
    p.display();
}
