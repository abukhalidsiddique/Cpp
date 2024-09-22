#include<iostream>
using namespace std;
class student
{
private:
    int a;
    public:

        student ()
        {
            a=0;
        }
        student(int a)
        {
            this->a=a;
        }
        student(student &s)
        {
            a=s.a;
        }
        void show()
        {
            cout<<a<<endl;
        }
};
int main()
{
    student a;
    student b(5);
    student c=b;
    a.show();
    b.show();
    c.show();

}
