#include<iostream>
using namespace std;
inline void call(int x);
int main()
{
int a;
cin>>a;
call(a);
}
inline void call(int n)
{
int num[32];

int i = 0;
while (n > 0) {

num[i] = n % 2;
n = n / 2;
i++;
}

for (int j = i - 1; j >= 0; j--)
cout << num[j];
}
