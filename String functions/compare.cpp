#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s1="Asif ";
    string s2="Khalid ";
    cout<<"s1: "<<s1<<endl<<"s2: "<<s2<<endl;
    int a=s1.compare(s2);
    cout<<a<<endl;              // 1..compare
    if(a==0)
        cout<<"They are equal"<<endl;
        else if(a==-1)
            cout<<"s1>s2"<<endl;
        else
            cout<<"s1<s2"<<endl;

   int len=s1.length();
   cout<<"Length of s1: "<<len<<endl; // 2..length
   s1.swap(s2);
   cout<<"After Swapping s1: "<<s1<<endl<<"After swapping s2: "<<s2<<endl; // 3..swap
   string s3="Siddique";
   s3.resize(3);
   cout<<"after resize:"<<s3<<endl;   // 4.. resize
   int Size=s1.size();
   cout<<"Size of s1: "<<Size<<endl;    // 5.. size
   string str1 = "I am Khalid";
   string str2 = "Asif";                     // 6.. replacement
   cout << "Before replacement, string is :"<<str1<<endl;
   str1.replace(5,6,str2);
   cout << "After replacement, string is :"<<str1<<endl;
   cout<<"After Adding"<<s1.append(s2)<<endl;  // 7.. Adding
   cout<<"S1: ";
   for(int i=0; i<s1.length(); i++)
  {
    cout<<  s1.at(i);            // 8.. at
  }
    cout<<endl;
   string str="Abu Khalid Siddique ";   //9.. finding pos
   cout<<"Position of Khalid is: "<<str.find("Khalid")<<endl;
   cout<<"h at pos: "<<str.find_first_of("h")<<endl; //10.. finding pos
   cout<<"Siddique at pos: "<<str.find_first_not_of("Siddique",11)<<endl;;  //11.. find first note
   cout<<"Last of d: "<<str.find_last_of("d")<<endl;   //12.. find last of
   cout<<"find Abu: "<<str.find_last_not_of("Abu")<<endl; //13.. find last not
   cout<<"After insertion :"<<str.insert(20,"Asif")<<endl; //14.. insert
   cout<<"Maximum size of str :"<<str.max_size()<<endl;  //15.. max size
   string player = "Cristiano Ronaldo ";
   player.push_back('7');
   cout<<"G.O.A.T : "<<player<<endl;  // 16.. Push back char ch
   player.pop_back();
   cout<<"pop-Back: "<<player<<endl; // 17.. pop back ch

   string str3;
   str3.assign(str);
   cout<<"str3 : " <<str3<<endl;  // 18.. assigning
   char str4[20];
   str.copy(str4,sizeof str); // 19.. copy
   cout<<"str4: "<<str4<<endl;
    string str5 ="I am Asif .";
    char &back=str5.back();
    back='!';
    cout<<str5<<endl; // 20.. char back
    *str5.begin()='a';
    cout<<str5<<endl;  // 21.. Iterator begin
    cout<<"capacity : "<<str1.capacity()<<endl; // 22.. capacity
    string str6 ="12345";
    cout<<str6.front()<<endl; // 23.. front
    string str7 = "Asif ";
    string str8="Khalid";   // 24.. operator+
    str7.operator+=(str8);
    cout<<str7<<endl;
    string str9="i am Khalid";  // 25.. operator swap
    str7.operator=(str9);
    cout<<str7<<endl;
    string findd="Khalid";  // 26.. find
    int i=str7.rfind(findd);
    cout<<i<<endl;
    string::iterator it =str7.end();
    cout<<*(it-1)<<endl;  // 27.. iterator end
    for(string::reverse_iterator itr=str7.rbegin();itr!=str7.rend();++itr)
    cout<<*itr;
    cout<<endl;  // 28.. reversing
    string str10="Abu Khalid Siddique";
    cout<<str10.capacity()<<endl;
    str10.shrink_to_fit();
    cout<<str10.capacity()<<endl;   // 29.. shrink capacity
    string str11="Abu khalid Siddique";
    int j;
    while(str11[j]!='\0')
    {
        j++;                 // 30.. finding size using null character
    }
    cout<<"Size of str 11: "<<j<<endl;

}
