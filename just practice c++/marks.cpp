#include<iostream>
using namespace std;
int main()
{
    int math,eng,phi;
    cout<<"Enter the math: ";
    cin>>math;
    cout<<"Enter the english: ";
    cin>>eng;
    cout<<"Enter the phi: ";
    cin>>phi;
    float avg;
    avg=(math+eng+phi)/3;
    cout<<"average: "<<avg;
}
