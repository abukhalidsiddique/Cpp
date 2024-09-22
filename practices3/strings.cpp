 #include <iostream>
#include <string.h>

#define maxx 100

using namespace std;

class youtube
{
    private:
        string ch_name,ch_id,own_name,vid_titles[maxx];
        int subs_num,total_vid;


    public:
        void get(string m, string n, string x, int y) {
            ch_name = m;
            ch_id = n;
            own_name = x;
            subs_num = y;
        }
        void entry()
        {
            int i,n;
            cout<<"How many videos you want to store in your channel: ";
            cin>>n;
            cin.ignore();
            for(i=0;i<n;i++)
            {
                cout<<"Enter the video title for the video "<<i+1<<": ";
                getline(cin,vid_titles[i]);
            }
            total_vid=n;
        }

        void subscription()
        {
             subs_num++;
        }

        void unsubscription()
        {
            subs_num--;
        }

        void add()
        {
            int n,i;
            cout<<"How many videos you want to add again: ";
            cin>>n;
            cin.ignore();
            for(i=0;i<n;i++)
            {
                if(total_vid==maxx)
                {
                    cout<<"You can not add more. Limit has been Exceeded"<<endl;
                    return;
                }
                else
                {
                    cout<<"titles of videos "<<total_vid+1<<": ";
                    getline(cin,vid_titles[total_vid]);
                }
                total_vid++;
            }
               show();
        }

        void delet(string a)
        {
            int numb = 1;
            for (int i=0; i<total_vid; i++) {
                if (vid_titles[i] == a) {
                    numb = i;
                    break;
                }
            }
            if (numb == 1) {
                cout << "Unknown video" << endl;
                return;
            }
            else
            {
                 for (int i=numb; i<total_vid-1; i++)
                {
                vid_titles[i] = vid_titles[i+1];
                }
                    total_vid--;
            }
               show();
        }

        void show()
        {
            cout << "Channel Name: " << ch_name << endl;
            cout << "Channel ID: " << ch_id << endl;
            cout << "Channel Owner: " << own_name << endl;
            cout << "Subscriber Count: " << subs_num << endl;
            cout << "Videos:" << endl;
            for (int i=0; i< total_vid; i++) {
                cout << "  " << i+1 << ". " << vid_titles[i] << endl;
            }
            cout << endl;
        }
        void name()
        {
            cout<<endl<<"Channel Name: "<<ch_name<<endl;
        }
};

int main() {
   int n,i;
    cout<<"Enter the cooking channels number: ";
    cin>>n;
    youtube cooking[n];
    for(i=0;i<n;i++)
    {
        cin.ignore();
        string a,m="Cooking channel ",n,p;
        int x;
        cout<<"Enter the channel name: ";
        getline(cin,a);
        string b=m+a;
        cout<<"Enter the channel id: ";
        getline(cin,n);
        cout<<"Enter the channels owner name: ";
        getline(cin,p);
        cout<<"Entr the number of subscriber: ";
        cin>>x;
        cooking[i].get(b,n,p,x);
        cooking[i].entry();
    }
    for(i=0;i<n;i++)
    {
         cooking[i].show();
    }

    for(i=0;i<n;i++)
    {
         cooking[i].name();
         cout<<endl<<"Do you want to subscribe this channel ?"<<endl;
         cout<<"1. Yes  or   2. Not"<<endl;
         int f;
         cout<<"Enter your decission: ";
         cin>>f;
         if(f==1)
         {
             cooking[i].subscription();
         }
         else
            cout<<"No problem"<<endl;
    }

      for(i=0;i<n;i++)
    {
         cooking[i].name();
         cout<<endl<<"Do you want to unsubscribe this channel ?"<<endl;
         cout<<"1. Yes  or   2. Not"<<endl;
         int f;
         cout<<"Enter your decission: ";
         cin>>f;
         if(f==1)
         {
             cooking[i].unsubscription();
         }
         else
            cout<<"No problem"<<endl;
    }
    for(i=0;i<n;i++)
    {
        cooking[i].name();
        cout<<"Do you want to add more videos in this channel: "<<endl;
        cout<<"1. Yes   or    2. Not"<<endl;
        int n;
        cout<<"Enter your choice: ";
        cin>>n;
        if(n==1)
        {
            cooking[i].add();
        }
        else
        {
            cout<<"you can skip"<<endl;
        }

    }

     for(i=0;i<n;i++)
    {
        cooking[i].name();
        cout<<"Do you want to remove a video from this channel: "<<endl;
        cout<<"1. Yes    or      2. Not"<<endl;
        int n;
        cout<<"Enter your choice: ";
        cin>>n;
        if(n==1)
        {
          string a;
          cin.ignore();
          cout<<"Enter the name of the video that you want to delete from this channel: ";
          getline(cin,a);
          cooking[i].delet(a);
        }
        else
        {
            cout<<"You can skip"<<endl;
        }
     }

cout<<"Enter the sports channels number: ";
    cin>>n;
    youtube sports[n];
    for(i=0;i<n;i++)
    {
        cin.ignore();
        string a,m=" Sports channel ",n,p;
        int x;
        cout<<"Enter the channel name: ";
        getline(cin,a);
        string b=m+a;
        cout<<"Enter the channel id: ";
        getline(cin,n);
        cout<<"Enter the channels owner name: ";
        getline(cin,p);
        cout<<"Enter the number of subscriber: ";
        cin>>x;
        sports[i].get(b,n,p,x);
        sports[i].entry();
    }
    for(i=0;i<n;i++)
    {
         sports[i].show();
    }

    for(i=0;i<n;i++)
    {
         sports[i].name();
         cout<<endl<<"Do you want to subscribe this channel ?"<<endl;
         cout<<"1. Yes  or   2. Not"<<endl;
         int f;
         cout<<"Enter your decission: ";
         cin>>f;
         if(f==1)
         {
             sports[i].subscription();
         }
         else
            cout<<"No problem"<<endl;
    }

      for(i=0;i<n;i++)
    {
         sports[i].name();
         cout<<endl<<"Do you want to unsubscribe this channel ?"<<endl;
         cout<<"1. Yes  or   2. Not"<<endl;
         int f;
         cout<<"Enter your decission: ";
         cin>>f;
         if(f==1)
         {
             sports[i].unsubscription();
         }
         else
            cout<<"No problem"<<endl;
    }
    for(i=0;i<n;i++)
    {
        sports[i].name();
        cout<<"Do you want to add more videos in this channel: "<<endl;
        cout<<"1. Yes   or    2. Not"<<endl;
        int n;
        cout<<"Enter your choice: ";
        cin>>n;
        if(n==1)
        {
            sports[i].add();
        }
        else
        {
            cout<<"you can skip"<<endl;
        }

    }

     for(i=0;i<n;i++)
    {
        sports[i].name();
        cout<<"Do you want to remove a video from this channel: "<<endl;
        cout<<"1. Yes    or      2. Not"<<endl;
        int n;
        cout<<"Enter your choice: ";
        cin>>n;
        if(n==1)
        {
          string a;
          cin.ignore();
          cout<<"Enter the name of the video that you want to delete from this channel: ";
          getline(cin,a);
          sports[i].delet(a);
        }
        else
        {
            cout<<"You can skip"<<endl;
        }
     }

cout<<"Enter the News channels number: ";
    cin>>n;
    youtube news[n];
    for(i=0;i<n;i++)
    {
        cin.ignore();
        string a,m="News channel ",n,p;
        int x;
        cout<<"Enter the channel name: ";
        getline(cin,a);
        string b=m+a;
        cout<<"Enter the channel id: ";
        getline(cin,n);
        cout<<"Enter the channels owner name: ";
        getline(cin,p);
        cout<<"Entr the number of subscriber: ";
        cin>>x;
        news[i].get(b,n,p,x);
        news[i].entry();
    }
    for(i=0;i<n;i++)
    {
         news[i].show();
    }

    for(i=0;i<n;i++)
    {
         news[i].name();
         cout<<endl<<"Do you want to subscribe this channel ?"<<endl;
         cout<<"1. Yes  or   2. Not"<<endl;
         int f;
         cout<<"Enter your decission: ";
         cin>>f;
         if(f==1)
         {
             news[i].subscription();
         }
         else
            cout<<"No problem"<<endl;
    }

      for(i=0;i<n;i++)
    {
         news[i].name();
         cout<<endl<<"Do you want to unsubscribe this channel ?"<<endl;
         cout<<"1. Yes  or   2. Not"<<endl;
         int f;
         cout<<"Enter your decission: ";
         cin>>f;
         if(f==1)
         {
             news[i].unsubscription();
         }
         else
            cout<<"No problem"<<endl;
    }
    for(i=0;i<n;i++)
    {
        news[i].name();
        cout<<"Do you want to add more videos in this channel: "<<endl;
        cout<<"1. Yes   or    2. Not"<<endl;
        int n;
        cout<<"Enter your choice: ";
        cin>>n;
        if(n==1)
        {
            news[i].add();
        }
        else
        {
            cout<<"you can skip"<<endl;
        }

    }

     for(i=0;i<n;i++)
    {
        news[i].name();
        cout<<"Do you want to remove a video from this channel: "<<endl;
        cout<<"1. Yes    or      2. Not"<<endl;
        int n;
        cout<<"Enter your choice: ";
        cin>>n;
        if(n==1)
        {
          string a;
          cin.ignore();
          cout<<"Enter the name of the video that you want to delete from this channel: ";
          getline(cin,a);
          news[i].delet(a);
        }
        else
        {
            cout<<"You can skip"<<endl;
        }
     }



    return 0;
}
