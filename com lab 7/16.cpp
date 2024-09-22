
#include<iostream>
using namespace std;
class Movie
{
private:
    string title,director;
        int date;
public:
    Movie(string t,string a,int d)
    {
         title=t;
         director=a;
         date=d;
    }
    void give()
    {
        cout<<"title: "<<title<<endl;
        cout<<"director: "<<director<<endl;
        cout<<"date: "<<date<<endl;
    }
};
int main()
{
    Movie m("Intersteller","Cristofer Nolan",2015);
    m.give();
    return 0;
}

