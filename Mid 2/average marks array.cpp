 #include<iostream>
 using namespace std;
 int n;
 class student
 {
  private:
      string name,roll_no;
      int marks;
  public:
    student()
    {
        cin.ignore();
        cout<<"enter the name: ";
        getline(cin,name);
        cout<<"enter the roll no: ";
        getline(cin,roll_no);
        cout<<"enter the mark: ";
        cin>>marks;
    }
    void display()
    {
        cout<<"name: "<<name<<endl;
         cout<<"roll no: "<<roll_no<<endl;
          cout<<"mark: "<<marks<<endl;
    }
    friend int avg(student a[]);
    ~student()
    {

    }

 };

 int main()
 {

   cout<<"HOW many student: ";
   cin>>n;
     student a[n];
     int i;
     for(i=0;i<n;i++)
     {
         cout<<"student "<<i+1<<endl;
         a[i].display();
     }
     cout<<"Average marks : "<<avg(a)<<endl;
 }
 int avg(student a[])
 {
     double sum=0,av;
     int i;
     for(i=0;i<n;i++)
     {
         sum=sum+a[i].marks;
     }
     av=sum/n;
     return av;
 }
