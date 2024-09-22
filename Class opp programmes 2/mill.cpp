#include<iostream>
using namespace std;
int main()
{
    float asif,najmul,asad,rafsan,rafi;
      cout<<"Taken money: "<<endl;
       cout<<"Taken money from Asif: ";
       cin>>asif;
       cout<<"Taken money from Najmul: ";
       cin>>najmul;
       cout<<"Taken money from Asad: ";
       cin>>asad;
       cout<<"Taken money from rafsan: ";
       cin>>rafsan;
       cout<<"Taken money from Rafi: ";
       cin>>rafi;
        cout<<"Mill : "<<endl;
    float asifmill,najmulmill,asadmill,rafsanmill,rafimill;
        cout<<"Mill of asif: ";
        cin>>asifmill;
        cout<<"Mill of najmul: ";
        cin>>najmulmill;
        cout<<"Mill of asad: ";
        cin>>asadmill;
        cout<<"Mill of rafsan: ";
        cin>>rafsanmill;
        cout<<"Mill of rafi: ";
        cin>>rafimill;
    float totalmoney=asif+najmul+asad+rafsan+rafi;
    float totalmill=asifmill+najmulmill+asadmill+rafsanmill+rafimill;
    float sum=0;
    int i, a[31];
    cout<<"Spend money: "<<endl;
    for(i=0;i<31;i++)
    {
        cout<<"day "<<i+1<<": ";
        cin>>a[i];
        sum+=(float)a[i];
    }
   float millrate=sum/totalmill;
   cout<<"Mill rate: "<<millrate<<endl;
    cout<<"Bill: "<<endl;
    cout<<"Asif: "<<asifmill*millrate<<endl;
    cout<<"Najmul: "<<najmulmill*millrate<<endl;
    cout<<"Asad: "<<asadmill*millrate<<endl;
    cout<<"Rafsan: "<<rafsanmill*millrate<<endl;
    cout<<"Rafi: "<<rafimill*millrate<<endl;
    cout<<"Give and Take: "<<endl;
    cout<<"Asif: "<<asif-asifmill*millrate<<endl;
    cout<<"Najmul: "<<najmul-najmulmill*millrate<<endl;
    cout<<"Asad: "<<asad-asadmill*millrate<<endl;
    cout<<"Rafsan: "<<rafsan-rafsanmill*millrate<<endl;
    cout<<"Rafi: "<<rafi-rafimill*millrate<<endl;

}
