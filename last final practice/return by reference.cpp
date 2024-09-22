#include<iostream>
using namespace std;
int nothing;
inline int &num(int &get);
  int main()
{
    int mark;
    cin>>mark;
    num(mark)=1;
    if(mark==1)
    {
        cout<<"oVER MARK";
    }
    else
        cout<<"thik asa"<<mark;
}

inline int &num(int &get)
{
    if(get>100)
        return get;
    else return nothing;
}
