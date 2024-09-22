#include<iostream>
using namespace std;
class employee
{
    public:
    int id;
    int age;
    double salary;
      fun()
      {
          cout<<id<<" "<<age<<" "<<salary<<endl;
      }
      employee(int x, int y, double z)
      {
         id=x;
         age=y;
         salary=z;
      }

};
int main()
{
    employee asif(22,24,45000);
    asif.fun();
    employee khalid(23,25,56000);
    khalid.fun();
}

