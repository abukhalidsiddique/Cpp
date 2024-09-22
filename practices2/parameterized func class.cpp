
#include<iostream>
#include<conio.h>
using namespace std;
class student
{
      public:
    int age;
    float gpa;
    void display()
    {
        cout<< age<<" "<< gpa<< "\n";
    }
    void value(int x, float y)
    {
        age=x;
        gpa=y;
    }

};
int main()
{
    student asif, khalid;

     asif.value(24,3.8);
     asif.display();

     khalid.value(24,3.8);
khalid.display();

}
