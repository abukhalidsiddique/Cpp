#include<iostream>
using namespace std;
class volume
{
    public:
    int length,breadth,height;
    void input()
    {
        cout<<"Enter the length: ";
        cin>>length;
        cout<<"Enter the breadth: ";
        cin>>breadth;
        cout<<"Enter the height: ";
        cin>>height;
        cout<<"Volume= "<<length*breadth*height;

    }
};
int main()
{
    volume v1;
    v1.input();

}
