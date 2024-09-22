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

};
int main()
{
    student asif, khalid;
    asif.age=24;
    asif.gpa=3.8;
      asif.display();
    khalid.age=23;
    khalid.gpa=3.78;
    khalid.display();


}
