#include<iostream>
using namespace std;
class person
{
public:
    display()
    {
        cout<<"I am a Person\n";
    }
};
class student: public person
{
    public:
    display()
    {
     cout<<"I am a student\n";
    }
};
class teacher: public student
{
    public:
    display()
    {
     cout<<"I am a teacher\n";
    }
};

int main()
{
    person p1;
    p1.display();
    student s1;
    s1.display();
    teacher t1;
    t1.display();
}
