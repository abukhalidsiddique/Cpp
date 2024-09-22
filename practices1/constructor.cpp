#include<iostream>
#include<conio.h>
using namespace std;
class student
{
     public:
  int id;
  float gpa;
   void display()
   {
       cout<<id<<" "<<gpa<<"\n";
   }
   student(int x,float y)
   {
       id=x;
       gpa=y;
   }
   student()
   {
       cout<<"default\n";
   }

};

int main()
{
    student ob;
    student asif(22203047,3.82),khalid(22203048,3.78);
    asif.display();
    khalid.display();
}
