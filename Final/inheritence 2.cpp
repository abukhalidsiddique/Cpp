#include<iostream>
using namespace std;
class vehicles
{
protected:
    int mileage;
    double price;
public:
    vehicles()
    {
        cout<<"Enter the mileage: ";
        cin>>mileage;
        cout<<"Enter the price: ";
        cin>>price;
    }
};
class car: public vehicles
{
protected:
    double cost,warranty,seat;
    string fuel;
public:
    car()
    {
        cout<<"Enter the cost: ";
        cin>>cost;
        cout<<"Enter the warranty by years: ";
        cin>>warranty;
        cout<<"Enter the seat: ";
        cin>>seat;
        cin.ignore();
        cout<<"Enter the fuel type: ";
        getline(cin,fuel);
    }
};
class bike: public vehicles
{
protected:
    int cylinder,gear,tank;
    string cooling,wheel;
public:
    bike()
    {
         cout<<"Enter the cylinder number: ";
        cin>>cylinder;
        cout<<"Enter the gear: ";
        cin>>gear;
        cout<<"Enter the tank in inch: ";
        cin>>tank;
        cin.ignore();
        cout<<"Enter the cooling type: ";
        getline(cin,cooling);
        cout<<"Enter the wheel type: ";
        getline(cin,wheel);
    }
};
class audi:public car
{
protected:
    string model;
public:
    audi()
    {
        cout<<"Enter the model: ";
        getline(cin,model);
    }
    void show1()
    {
        cout<<"Model Type: "<<model<<endl;
        cout<<"Owner ship cost: "<<cost<<endl;
        cout<<"warranty: "<<warranty<<endl;
        cout<<"Seat: "<<seat<<endl;
        cout<<"Fuel type: "<<fuel<<endl;
        cout<<"Mileage: "<<mileage<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
class ford:public car
{
protected:
    string model;
public:
    ford()
    {
        cout<<"Enter the model: ";
        getline(cin,model);
    }
    void show2()
    {
        cout<<"Model Type: "<<model<<endl;
        cout<<"Owner ship cost: "<<cost<<endl;
        cout<<"warranty: "<<warranty<<endl;
        cout<<"Seat: "<<seat<<endl;
        cout<<"Fuel type: "<<fuel<<endl;
        cout<<"Mileage: "<<mileage<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

class bajaj:public bike
{
protected:
    string make;
public:
    bajaj()
    {
        cout<<"Enter the make type: ";
        getline(cin,make);
    }
    void show3()
    {
        cout<<"cylinder: "<<cylinder<<endl;
        cout<<"gear: "<<gear<<endl;
        cout<<"cooling: "<<cooling<<endl;
        cout<<"wheel type: "<<wheel<<endl;
        cout<<"tank size: "<<tank<<endl;
        cout<<"Make: "<<make<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
class tvs:public bike
{
protected:
    string make;
public:
    tvs()
    {
        cout<<"Enter the make type: ";
        getline(cin,make);
    }
    void show4()
    {
        cout<<"cylinder: "<<cylinder<<endl;
        cout<<"gear: "<<gear<<endl;
        cout<<"cooling: "<<cooling<<endl;
        cout<<"wheel type: "<<wheel<<endl;
        cout<<"tank size: "<<tank<<endl;
        cout<<"Make: "<<make<<endl;
        cout<<"Price: "<<price<<endl;
    }
};


 int main()
 {
     cout<<"Enter information for Audi:"<<endl;
     audi a;
     cout<<"AUDI: "<<endl;
     a.show1();
     cout<<"Enter information for ford:"<<endl;
     ford f;
     cout<<"FORD: "<<endl;
     f.show2();
     cout<<"Enter information for Bajaj:"<<endl;
     bajaj b;
     cout<<"BAJAJ: "<<endl;
     b.show3();
     cout<<"Enter information for TVS:"<<endl;
     tvs t;
     cout<<"TVS: "<<endl;
     t.show4();
 }
