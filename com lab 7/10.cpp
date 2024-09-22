#include<iostream>
using namespace std;
class house
{
private:
    string address;
     int square_footage,num_of_bed;
public:
    house(string a,int p, int q)
    {
         address=a;
         square_footage=p;
         num_of_bed=q;
    }
    void give()
    {
        cout<<"Address: "<<address<<endl;
        cout<<"square footage: "<<square_footage<<endl;
        cout<<"Number of bed: "<<num_of_bed<<endl;
    }
};
int main()
{
     house h("Tangail",6,3);
     h.give();
    return 0;
}


