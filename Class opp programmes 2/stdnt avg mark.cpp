 #include<iostream>
using namespace std;
class student
{
private:
    int roll,mark;
public:
    void get(int i)
    {
        roll=i;
        cout<<"Enter mark: ";
        cin>>mark;
    }
    void show()
    {
         cout<<"roll: "<<roll<<endl;
         cout<<"Mark: "<<mark<<endl;
    }
    friend int avg(student s[]);
};

int main()
{
    student s[8];
    for(int i=0;i<8;i++)
    {
        cout<<"Enter mark of student "<<i+1<<": "<<endl;
        s[i].get(i+1);
    }
     for(int i=0;i<8;i++)
    {
        cout<<"Student "<<i+1<<": "<<endl;
        s[i].show();
    }

    cout<<"Average mark: "<<avg(s);
}

 int avg(student s[])
 {
    int sum=0;
     for(int i=0;i<8;i++)
     {
         sum+=s[i].mark;
     }
     return sum/8;
 }
