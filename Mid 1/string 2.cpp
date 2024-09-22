#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string n="asif";
    string m=" khalid";
    string s;
    int a=n.compare(m);
    if(a==0)
        cout<<"equal"<<endl;
    else if(a==1)
        cout<<"m>n"<<endl;
    else if(a==-1)
    cout<<"n>m"<<endl;
    else
        cout<<"Error";
}
