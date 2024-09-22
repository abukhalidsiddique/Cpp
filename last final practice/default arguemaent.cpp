#include<iostream>
using namespace std;
inline void show(int x=0,int y=0,int z=0);

int main()
{
    show(3,5,6);
     show(3,5);
     show(6,8,2);
      show();
}
inline void show(int x,int y,int z)
{
      cout<<"X: "<<x<<endl;
     cout<<"Y: "<<y<<endl;
      cout<<"Z: "<<z<<endl;
}

