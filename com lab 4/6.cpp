 #include<iostream>
using namespace std;
#define pi 3.1416
inline float circle_area(float n);
int main()
{
    float r;
    cin>>r;
    cout<<circle_area(r);
}
inline float circle_area(float n)
{
    return pi*n*n;
}
