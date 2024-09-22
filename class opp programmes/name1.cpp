#include<iostream>
using namespace std;
class student
{
private:
    string name="Asif";
    int roll=2;
public:
    void show()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<<roll;
    }
};
int main()
{
    student s1;
    s1.show();
}
