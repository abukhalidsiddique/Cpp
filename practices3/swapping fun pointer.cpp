#include<iostream>
using namespace std;
void swapp(int *p, int *q);
int main()
{
    int x,y;

    cin>>x>>y;
    swapp(&x,&y);


}
void swapp(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;


    cout<<*p<<endl<<*q;
}

