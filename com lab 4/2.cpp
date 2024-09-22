#include<iostream>
using namespace std;
 inline int ap(int x,int y, int z);
int main()
{
   int a, num, diff, tn, i;
   int sum = 0;
   cout<<"enter 1st no of series: ";
   cin>>a;
   cout<<" enter total no's in series: ";
   cin>>num;
   cout<<"enter Common Difference: ";
   cin>>diff;
   cout<<"sum of this A.P. series: "<<ap(a,num,diff);
   return 0;
   }
   inline int ap(int x,int y, int z)
   {
       return (y*(y-1)*z/2);
   }
