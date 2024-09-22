#include<iostream>
using namespace std;
class a
{
protected:
    int c;
public:

    a()
    {
        cout<<"Enter a: ";
        cin>>c;
    }
     void show()
     {
         cout<<c<<endl;
     }

};
class b:public a
{
    public: void show()
    {
        cout<<"b= "<<c<<endl;
    };
};

int main()
{

     a *a1;
     b b1;
     a1=&b1;
     a1->show();
}
