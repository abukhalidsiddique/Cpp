#include<iostream>
using namespace std;
class num
{

    int n;
public:

    void getdata();
    void display();
};
void num::getdata()
{

        cout<<"Enter the number: ";
    cin>>n;
}
void num::display()
{
     int temp,r,sum=0;
     temp=n;
     while(temp!=0)
     {
         r=temp%10;
         sum=(sum*10)+r;
         temp=temp/10;
     }
     if(sum==n)
    cout<<"palindrome"<<endl;
}
int main()
{
    num p;
    p.getdata();
    p.display();
}

