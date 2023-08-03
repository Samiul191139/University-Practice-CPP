#include <iostream>
#include <string>

using namespace std;
const int MAX_CHARACTERS = 20;

class Character 
{
private:
    string name;
    int level;
public:
    void setDetails(const string& characterName, int characterLevel) 
    {
        name = characterName;
        level = characterLevel;
    }
    void displayDetails() const 
    {
        cout << "Character Name: " << name << endl;
        cout << "Level: " << level << endl;
    }
    int getLevel() const {
        return level;
    }
};

int main() 
{
    Character characters[MAX_CHARACTERS];
    for (int i = 0; i < MAX_CHARACTERS; ++i) 
    {
        string name;
        int level;
        cout << "Enter Character Name: ";
        getline(cin >> ws, name);  // Allowing spaces in the name
        cout << "Enter Character Level: ";
        cin >> level;
        characters[i].setDetails(name, level);
        cout << endl;
    }
    int highestLevel = 0;
    int highestLevelIndex = -1;
    for (int i = 0; i < MAX_CHARACTERS; ++i) 
    {
        if (characters[i].getLevel() > highestLevel) 
        {
            highestLevel = characters[i].getLevel();
            highestLevelIndex = i;
        }
    }
    if (highestLevelIndex != -1) 
    {
        cout << "Character with the Highest Level:" << endl;
        characters[highestLevelIndex].displayDetails();
    } 
    else 
    {
        cout << "No characters found." << endl;
    }
    return 0;
}