#include<iostream>
using namespace std;
int main()
{
    int distance;
    float fuel,mileage;
    cout<<"Distance: ";
    cin>>distance;
    cout<<"Fuel: ";
    cin>>fuel;
    mileage=(float)distance/fuel;
    cout<<"Mileage= "<<mileage<<endl;

}
