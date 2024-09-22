#include<iostream>
using namespace std;
class s
{
private:
    int value;
public:
    s()
    {
        value=0;
    }
    s(int a)
    {
        value=a;
    }
    s operator -(s a)
    {
        s temp;
        temp.value=value-a.value;
        return temp;
    }
    void display()
    {
        cout<<"Value: "<<value<<endl;
    }
};
int main()
{
    s s1(5),s2(3),s3=s1-s2;
    cout<<"Value of s1: "<<endl;
    s1.display();
    cout<<"Value of s2: "<<endl;
    s2.display();
    cout<<"Value of s3: "<<endl;
    s3.display();
}
