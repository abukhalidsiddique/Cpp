
#include<iostream>
using namespace std;
inline int fibonacci(int *x,int *y);
int main()
{
    int first=0,second=1,n,fibo,i;
    cout<<"Enter the n: ";
    cin>>n;
    cout<<"Fibo of "<<n<<": "<<first<<" "<<second<<" ";
      for(i=2;i<n;i++)
      {
          fibonacci(&first,&second);
      }

}
inline int fibonacci(int *x,int *y)
{
    int temp;
    temp=*x+*y;
    *x=*y;
    *y=temp;

     cout<<temp<<" ";
}

