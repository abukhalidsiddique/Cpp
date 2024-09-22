#include<iostream>
using namespace std;
class temp
{
private:
    double heat;
public:
    temp()
    {
        cout<<"enter temp: ";
        cin>>heat;
    }
    void show()
    {
        cout<<"temperature: "<<heat<<endl;
    }
    friend double change(temp a)
    {
        double m;
        m=a.heat*9/5;
        return m;
    }
};
int main()
{
    temp a;
    cout<<"temp in cel: "<<endl;
    a.show();
    cout<<"temp in fa: "<<endl;
    cout<<"tempareture: "<<change(a)<<endl;
}
