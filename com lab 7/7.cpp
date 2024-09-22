#include<iostream>
using namespace std;
class Book
{
private:
    string title,author;
        int date;
public:
    Book(string t,string a,int d)
    {
         title=t;
         author=a;
         date=d;
    }
    void give()
    {
        cout<<"title: "<<title<<endl;
        cout<<"author: "<<author<<endl;
        cout<<"date: "<<date<<endl;
    }
};
int main()
{
    Book b("Linear Algebra","Ashraful Babu",2023);
    b.give();
    return 0;
}

