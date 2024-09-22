#include<iostream>
using namespace std;
class library
{
private:
    int price;
    string book;
public:
    library()
    {

        cout<<"Enter the book name: ";
        getline(cin,book);
        cout<<"Enter the price: ";
        cin>>price;
        cin.ignore();
    }
    void show()
    {
        cout<<"name: "<<book<<endl;
        cout<<"price: "<<price<<endl;
    }
    friend int pr(library l[]);
    ~library()
    {
        cout<<"destructor";
    }
};
int pr(library l[])
{
    int i,sum=0;
    for(i=0;i<2;i++)
    {
        sum+=l[i].price;
    }
    return sum/2;
}

int main()
{
    library a[2];
    for(int i=0;i<2;i++)
    {
       cout<<"Library "<<i+1<<endl;
        a[i].show();
    }
    cout<<"Averahe price : "<<pr(a)<<endl;
}
