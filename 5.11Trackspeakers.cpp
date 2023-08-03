#include <iostream>
#include <string>
using namespace std;
const int MAX_SPEAKERS = 10;

class Speaker 
{
private:
    string name;
    string topic;

public:
    void setDetails(const string& speakerName, const string& speakerTopic) 
    {
        name = speakerName;
        topic = speakerTopic;
    }

    void displayDetails() const 
    {
        cout << "Speaker Name: " << name << endl;
        cout << "Topic: " << topic << endl;
    }
};

int main() 
{
    Speaker speakers[MAX_SPEAKERS];

    // Get speaker details and topics
    for (int i = 0; i < MAX_SPEAKERS; ++i) 
    {
        string name, topic;
        cout << "Enter Speaker Name: ";
        getline(cin >> ws, name);
        cout << "Enter Speaker Topic: ";
        getline(cin >> ws, topic);

        speakers[i].setDetails(name, topic);
        cout << endl;
    }
    for (int i = 0; i < MAX_SPEAKERS; ++i) 
    {
        cout << "Speaker " << i + 1 << " Details:" << endl;
        speakers[i].displayDetails();
        cout << endl;
    }
    return 0;
}