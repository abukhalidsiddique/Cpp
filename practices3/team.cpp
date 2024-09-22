#include<iostream>
using namespace std;
int main()
{
    int n,Petya,Vasya,Tonya;
    cin>>n;
    int i,countt=0;
    for(i=1;i<=n;i++)
    {
        cin>>Petya;
        cin>>Vasya;
        cin>>Tonya;
        if(Petya==0||Petya==1&&Vasya==0||Vasya==1&&Tonya==0||Tonya==1)
        {
            cout<<Petya<<" "<<Vasya<<" "<<Tonya<<endl;
            if(Petya==1&&Vasya==1)
                countt++;
            else if(Petya==1&&Tonya==1)
                countt++;
            else if(Vasya==1&&Tonya==1)
                countt++;
        }
        cout<<countt<<endl;
    }
}
