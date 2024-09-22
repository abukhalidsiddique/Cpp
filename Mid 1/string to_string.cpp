#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string accountno="BA";
    int temp=5;
    string s=to_string(temp);
   accountno=accountno+s;
   cout<<accountno;
}
