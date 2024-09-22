#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the X: ";
    cin>>x;
    int *p=&x;
    cout<<"Value of X: "<<*p<<endl;
}
