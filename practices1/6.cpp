#include<iostream>
using namespace std;

class number
{
private:
    int num;


public:
    void get(int n)
    {
        num=n;
    }
    void arm()
    {

        int r,sum=0,temp;
        temp=num;
        while(temp!=0)
        {
            r=num%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }
        if(sum==num)
            cout<<"armstrong"<<endl;
    }
    void per()
    {
        int i,sum=0;
        for(i=0;i<num;i++)
        {
            if(num%i==0)
                sum=sum+i;
        }
        if(sum==num)
            cout<<"perfect";
    }
    void prime()
    {
        int i,countt=0;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
                countt++;
        }
        if(countt==0)
            cout<<"prime";
        else
            cout<<"not prime";
    }

};
int main()
{


int x;
   cin>>x;
   number n1;
   n1.get(x);
    n1.arm();
    n1.per();
    n1.prime();
}

