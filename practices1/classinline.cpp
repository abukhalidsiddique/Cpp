#include<iostream>
using namespace std;
class student
{
    private:
     string name;
     int age;
     int id;
    public:
        void input(string x,int y,int z);
        void output();
        int add();
};
inline void student:: input(string x,int y,int z)
{
    name=x;
    age=y;
    id=z;
}
inline void student::output()
{
    cout<<"name: "<<name<<endl;
    cout<<"age: "<<age<<endl;
    cout<<"id: "<<id<<endl;
}
inline int student:: add()
{
    return age+id;
}
int main()
{
    student asif,rakib;
    cout<<"Asif"<<endl;
    asif.input("Asif",24,22203047);
    asif.output();
    cout<<asif.add()<<endl;
    cout<<"rakib"<<endl;
    rakib.input("Rakib",26,22763047);
    rakib.output();
    cout<<rakib.add();
}
