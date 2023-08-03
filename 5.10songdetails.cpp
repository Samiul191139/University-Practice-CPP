#include <iostream>
#include <string>
using namespace std;
const int MAX_SONGS = 15;

class Song 
{
private:
    string title;
    int duration;

public:
    void setDetails(const string& songTitle, int songDuration) 
    {
        title = songTitle;
        duration = songDuration;
    }

    void displayDetails() const 
    {
        cout << "Title: " << title << endl;
        cout << "Duration: " << duration << " seconds" << endl;
    }

    int getDuration() const 
    {
        return duration;
    }
};

int main() 
{
    Song songs[MAX_SONGS];
    for (int i = 0; i < MAX_SONGS; ++i) 
    {
        string title;
        int duration;

        cout << "Enter Song Title: ";
        getline(cin >> ws, title);
        cout << "Enter Song Duration (in seconds): ";
        cin >> duration;

        songs[i].setDetails(title, duration);
        cout << endl;
    }

    int longestDuration = 0;
    int longestDurationIndex = -1;
    for (int i = 0; i < MAX_SONGS; ++i) 
    {
        if (songs[i].getDuration() > longestDuration) 
        {
            longestDuration = songs[i].getDuration();
            longestDurationIndex = i;
        }
    }
    if (longestDurationIndex != -1) 
    {
        cout << "Song with the Longest Duration:" << endl;
        songs[longestDurationIndex].displayDetails();
    } 
    else 
    {
        cout << "No songs found." << endl;
    }
    return 0;
}