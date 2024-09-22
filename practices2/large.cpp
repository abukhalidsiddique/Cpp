#include<iostream>
using namespace std;
inline int send(int *p,int *q,int *r);
int main()
{
    int rakib,hasan,purno;
    cout<<"Enter there numbers: ";
    cin>>rakib>>hasan>>purno;
    cout<<send(&rakib,&hasan,&purno);
    return 0;
}
 inline int send(int *p,int *q,int *r)
{
    if(*p>*q)
    {
        if(*p>*r)
        {
            cout<<"rakib got highest: ";
            return *p;
        }
        else
            {
                 cout<<"purno got highest: ";
            return *r;
            }
    }
    else
    {
        if(*q>*r)
        {
            cout<<"hasan got highest: ";
            return *q;
        }
        else
            {
                 cout<<"purno got highest: ";
            return *r;
            }
    }
}
