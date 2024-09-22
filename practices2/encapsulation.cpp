#include<iostream>
using namespace std;
class student
{
private:
    int id;
     public:
    void get(int x)
    {
        id=x;
    }
   int send()
    {
        return id;
    }
};
int main()
{
    student s1;
    s1.get(22203047);
     cout<<s1.send();

}
