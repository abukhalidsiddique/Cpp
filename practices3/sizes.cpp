#include<iostream>
using namespace std;
int main()
{
    signed short a=-5;
    unsigned short b=4;
    int c=1587766;
    long int e=65565655;
    long long int f=454854848455;
    cout<<"signed_short_a= "<<a<<"\nSize= "<<sizeof(short);
    cout<<"\nunsigned_short_b= "<<b<<"\nSize= "<<sizeof(short);
    cout<<"\nint_c= "<<c<<"\nSize= "<<sizeof(int);
    cout<<"\nlong_int_e= "<<e<<"\nSize= "<<sizeof(long);
    cout<<"\nlong_long_int_f= "<<f<<"\nSize= "<<sizeof(long long);
}
