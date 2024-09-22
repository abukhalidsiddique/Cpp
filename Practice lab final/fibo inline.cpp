#include<iostream>

using namespace std;

inline void fibo(int a,int b,int c){

int i,d=0;

for(i=0;i<c;i++){

d=a+b;
a=b;
b=d;

cout<<"["<<d<<"]";
}

}

int main(){

int a;

cin>>a;

fibo(-1,1,a);

}
