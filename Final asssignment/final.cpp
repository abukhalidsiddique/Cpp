#include <iostream>
#include <string.h>

#define MAX_VIDEOS 100

using namespace std;

class YouTubeChannel {
    private:
        string channel_name;
        string channel_id;
        string owner_name;
        int subscriber_count;
        string video_titles[MAX_VIDEOS];
        int num_videos;

    public:
        YouTubeChannel(string cname, string cid, string oname, int sub_count) {
            channel_name = cname;
            channel_id = cid;
            owner_name = oname;
            subscriber_count = sub_count;
            num_videos = 0;
        }

        void subscribe() {
            subscriber_count++;
        }

        void unsubscribe() {
            subscriber_count--;
        }

        void add_video(string title) {
            if (num_videos == MAX_VIDEOS) {
                cout << "Maximum number of videos reached" << endl;
                return;
            }
            video_titles[num_videos] = title;
            num_videos++;
        }

        void remove_video(string title) {
            int index = -1;
            for (int i=0; i<num_videos; i++) {
                if (video_titles[i] == title) {
                    index = i;
                    break;
                }
            }
            if (index == -1) {
                cout << "Video not found" << endl;
                return;
            }
            for (int i=index; i<num_videos-1; i++) {
                video_titles[i] = video_titles[i+1];
            }
            num_videos--;
        }

        void display_channel_info() {
            cout << "Channel Name: " << channel_name << endl;
            cout << "Channel ID: " << channel_id << endl;
            cout << "Channel Owner: " << owner_name << endl;
            cout << "Subscriber Count: " << subscriber_count << endl;
            cout << "Videos:" << endl;
            for (int i=0; i<num_videos; i++) {
                cout << "  " << i+1 << ". " << video_titles[i] << endl;
            }
            cout << endl;
        }
};

int main() {
    YouTubeChannel cooking("Cooking Channel", "COOK123", "John Smith", 1000);
    cooking.display_channel_info();

    cooking.subscribe();
    cooking.add_video("Pasta Carbonara");
    cooking.add_video("Chicken Alfredo");
    cooking.add_video("Pizza Margherita");
    cooking.display_channel_info();

    cooking.unsubscribe();
    cooking.remove_video("Chicken Alfredo");
    cooking.display_channel_info();

    return 0;
}
