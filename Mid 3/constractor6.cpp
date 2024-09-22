#include<iostream>
using namespace std;
class employee
{
private:
    string id;
    double salary;
public:

    employee()
    {
         cout<<"Enter the id: ";
         cin>>id;
         cout<<"Enter the salary: ";
         cin>>salary;
    }
    employee(string i,double s)
    {
        id=i;
        salary=s;
    }
    employee(double s,string i="22203042")
    {
        id=i;
        salary=s;
    }

     /*employee(string i="22203045")
    {
         id=i;
         cout<<"Enter the salary: ";
         cin>>salary;
    }*/
    void show()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"SALARY: "<<salary<<endl<<endl;
    }
};

int main()
{


    employee e1("22203041",11000);
      employee e2(22000);

          employee e4("22203044",44000);

    employee e[3];





    e1.show();
     e2.show();

       e4.show();
   e[1].show(); e[2].show();
    e[3].show();


}
