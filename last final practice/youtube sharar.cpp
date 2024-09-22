
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class YouTubeChannel {
private:
    string name;
    string id;
    string owrN;
    string subscribe[10];
    string vidT[10];
    int vidC;
    int vidCapacity;
    int subC;
    int subCapacity;
    double sub[10];

public:
    YouTubeChannel(string n, string i, string o) {
        name = n;
        id = i;
        owrN = o;

        vidC = 0;
        subC = 0;
        vidCapacity = 10;
        subCapacity = 10;
    }

    ~YouTubeChannel() {
        delete[] vidT;
        delete[] subscribe;
        delete[] sub;
    }

   void printInfo() {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Owner: " << owrN << endl;
    cout << "Videos:\n";
    for (int i = 0; i < vidC; i++) {
        cout << "- " << vidT[i] << endl;
    }
    cout << "Subscriptions:\n";
    srand(time(NULL)); // seed the random number generator
    for (int i = 0; i < subC; i++) {
        cout << "- " << subscribe[i] << endl;
        cout << "Before subscription:" << endl;
        sub[i] = sub[i - 1] + rand() % 1000000 + rand(); // generate a random number
        cout << "Subscribers: " << sub[i] << endl;
        cout << "After subscription:" << endl;
        cout << "Subscribers: " << sub[i] + 1 << endl; // increment the number of subscribers
    }
}


    void addsub(string titl) {
        if (subC < subCapacity) {
            subscribe[subC] = titl;
            subC++;
        }
        else {
            cout << "Cannot add channel - capacity exceeded." << endl;
        }
    }

    void addVideoTitle(string title) {
        if (vidC < vidCapacity) {
            vidT[vidC] = title;
            vidC++;
        }
        else {
            cout << "Cannot add video title - video capacity exceeded." << endl;
        }
    }

    void removeVideoTitle(string title) {
        int index = -1;
        for (int i = 0; i < vidC; i++) {
            if (vidT[i] == title) {
                index = i;
                break;
            }
        }
        if (index != -1) {
            for (int i = index; i < vidC - 1; i++) {
                vidT[i] = vidT[i + 1];
            }
            vidC--;
        }
        else {
            cout << "Cannot remove video title - title not found." << endl;
        }
    }

    void removesub(string titl) {
    int index = -1;
    for (int i = 0; i < subC; i++) {
        if (subscribe[i] == titl) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        for (int i = index; i < subC - 1; i++) {
            subscribe[i] = subscribe[i + 1];
        }
        subC--;
        cout << "Unsubscribed from " << titl << endl;
        cout << "Subscribers: " << sub[index] << endl;
    } else {
        cout << "Cannot remove channel - channel not found." << endl;
    }
}

};

int main() {
    string name, id, owrN;
    cout << "Enter channel name: ";
    getline(cin, name);
    cout << "Enter channel ID: ";
    getline(cin, id);
    cout << "Enter owner name: ";
    getline(cin, owrN);

    YouTubeChannel channel(name, id, owrN);

    int option;
    do {
        cout << "\nSelect an option:\n"
             << "1. Display channel information\n"
             << "2. Add video title\n"
             << "3. Remove video title\n"
             << "4. Search and Subscribe to channel\n"
             << "5. Unsubscribe channel\n"
             << "6. Exit\n"
             << "Option: ";
        cin >> option;
        cin.ignore();

        switch (option) {
            case 1:
                channel.printInfo();
                break;
            case 2:
                {
                string title;
                cout << "Enter video title: ";
                getline(cin, title);

                channel.addVideoTitle(title);
                break;
                }
            case 3:
                {
                string title;
                cout << "Enter video title: ";
                getline(cin, title);
                channel.removeVideoTitle(title);
                break;
                }
            case 4:
                {
                string titl;
                cout << "Search and Subscribe Channel: ";
                getline(cin, titl);

                channel.addsub(titl);
                break;
                }
            case 5:
                {
                string titl;
                cout << "Unsubscribe: ";
                getline(cin, titl);
                channel.removesub(titl);
                break;
                }
            case 6:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid option. Please select again." << endl;
                break;
        }
    } while (option != 6);

    return 0;
}
