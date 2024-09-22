#include<iostream>
using namespace std;
class Employee
{
   public:
    int year_of_joining,salary;
    string name, address;
    void output(int x,int y, string n,string m)
    {
        year_of_joining=x;
        salary=y;
        name=n;
        address=m;
        cout<<name<<" "<<year_of_joining<<" "<<salary<<" "<<address<<endl;
    }

};

int main()
{
    Employee Robert, Sam, John ;
    Robert.output(1994,34000,"Robert","64C-Wallstreet");
    Sam.output(2000,45000,"Sam","68D-Wallsstreet");
    John.output(1992,46399,"John","26B-Wallsstreet");
}
