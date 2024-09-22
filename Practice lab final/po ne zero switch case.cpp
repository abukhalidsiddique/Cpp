#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number: ";
    cin>>x;
     switch(x>0)
     {
      case 1: cout<<"positive"; break;
         case 0: switch(x<0)
        {
            case 1: cout<<"negative"; break;
            case 0: cout<<"Zero";break;
        }break;
        default: cout<<"Error"<<endl; break;
     }

    }




/*switch(x>0)
    {
        case 1:cout<<"positive"<<endl; break;
         case 0: switch(x<0)
         {
            case 1:  cout<<"Negative"<<endl; break;
          case 0:  cout<<"Zero"<<endl; break;
         }     break;*/
