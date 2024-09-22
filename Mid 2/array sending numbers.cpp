#include<iostream>
using namespace std;
class sample
{
    private:
    int x;
    public:
        void get(int a)
    {
        x=a;
    }
    void put()
    {
        cout<<x<<"\t";
    }
};
int main()
{
    int i,a;
    sample s[3];
    for(i=0;i<3;i++)
    {
        cin>>a;
        s[i].get(a);
    }
    for(i=0;i<3;i++)
    {

        s[i].put();
    }

}
