#include<iostream>
#include<conio.h>
using namespace std;
class student
{
   public:
   const int xmfee,seatfee;
    student(int x, int y)
    :xmfee(x), seatfee(y)
    {
        cout<<x<<"\n"<<y;
    }
};
int main()
{

    student fee(15000,500);

}
