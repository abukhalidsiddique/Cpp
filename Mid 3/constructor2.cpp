#include<iostream>
using namespace std;
class pro
{
private:
      int id;
      char c;
      string s;
public:
    pro(int a)
    {
        id=a;
        c='0';
        s="0";
    }
      pro(char b)
    {
        id=0;
        c=b;
        s="0";
    }
      pro(string a)
    {
        id=3;
        c='0';
        s=a;
    }
    pro(int a,char b,string str)
    {
        id=a;
        c=b;
        s=str;
    }
      void output()
      {
          cout<<"id: "<<id<<endl;
          cout<<"char: "<<c<<endl;
          cout<<"string: "<<s<<endl;

      }
};

int main()
{

    pro s1(22203);
    pro s2('b');
    pro s3("Asif");
    pro s4(22,'c',"Khalid");
    s1.output();
    s2.output();
    s3.output();
    s4.output();


}
