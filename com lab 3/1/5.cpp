#include<iostream>
using namespace std;
 void call(int *p);
int main()
 {
     int a;
     cin>>a;
     call(&a);
     return 0;
 }
 void call(int *p)
 {
     cout<<*p;
 }
