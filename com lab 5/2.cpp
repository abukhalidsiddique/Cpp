#include<iostream>
using namespace std;
class student
{
private:
   int roll_no;
   int phone_no;
    string address;
     public:
     void input()
    {
        cout<<"Give the information: "<<endl;
        cout<<"Enter the roll no: ";
        cin>>roll_no;
        cout<<"Enter the phone no: ";
        cin>>phone_no;
        cout<<"Enter the address: ";
        cin>>address;
    }
    void output()
    {
        cout<<"roll no: "<<roll_no<<endl<<"phone no: "<<phone_no<<endl<<"address:"<<address<<endl;
    }
};
int main()
{
    student Sam , John;
    cout<<"Sam: "<<endl;
    Sam.input();
    Sam.output();
    cout<<"John: "<<endl;
    John.input();
    John.output();
}

