 #include<iostream>
 using namespace std;
 int mul(int x,int y=2,int z=3)
 {
     return x*y*z;
 }
 int main()
 {
     int a,b,z;
     cin>>a>>b;
     cout<<mul(a);
 }

