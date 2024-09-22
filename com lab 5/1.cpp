#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int roll_no;

    public:
     void show(string x,int y)
    {

          name=x;
              roll_no=y;
    }
    void a()
    {
        cout<<name<<endl<<roll_no;
    }
};
int main()
{
    student s1;
    s1.show("John",2);
    s1.a();
}
