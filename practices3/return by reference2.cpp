#include<iostream>
using namespace std;
 int & get(int &a);
 int x,y;
 int main()
 {
     int marks;
     cin>>marks;
     get(marks)=1;
     if(x==1)
        cout<<"over marks";
     else
        cout<<marks;
 }

int &get(int &a)
{
    if(a>100)
        return x;
    else
        return y;
}
