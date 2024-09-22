#include<iostream>
#include<string>
using namespace std;
  class student
  {
     private:
      long double id,phone;
      int age;
   public:
       student(long double a,long double b,int c)
       {
           id=a;
           phone=b;
           age=c;
       }


       void output()
        {
            cout<<"id: "<<id<<endl;
            cout<<"phone: "<<phone<<endl;
            cout<<"age: "<<age;
        }
  };

  int main()
  {
      student s(2433.27,4372.34,24);

      s.output();
  }
