#include<iostream>
using namespace std;
  int ok();
  int nothing;
int main()
{

    ok();

}
 int ok()
{
  int x;
   int sum=0;
    for(x=100;x<=200;x++)
    {
       if(x%9==0)
    {
         cout<<x<<" ";
         sum=sum+x;
    }
    }

    cout<<endl<<sum;
}
