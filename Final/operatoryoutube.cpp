#include<iostream>
using namespace std;
class youtube
{
public:
    string name;
    int subscriber;
    youtube(string a,int b)
    {
        name=a;
        subscriber=b;
    }

};
 void operator << (ostream& COUT, youtube& y)
    {
        COUT<<"name: "<<y.name<<"  "<<"Subscriber: "<<y.subscriber<<endl;
    }
int main()
{
    youtube y1("Asif",8);
     youtube y2("Khalid",100);
    cout<<y1;
    cout<<y2;
}
