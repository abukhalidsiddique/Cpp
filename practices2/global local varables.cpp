#include<iostream>
using namespace std;
int n=10;
int main()
{
    int n=20;
    {
        int m=n;
        n=30;
        cout << "inner block\n" << "m= " << m << "\n" << "n= " << n << "\n" << "::n= " <<::n;
    }
    cout << "\nouter block\n" << "n= " <<n << "\n" << "::n= " <<::n;
}
