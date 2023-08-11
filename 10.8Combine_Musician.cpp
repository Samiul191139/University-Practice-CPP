#include <iostream>
#include <string>
using namespace std;
class Musician 
{
private:
    string guitar;
    string vocals;
    string drums;
public:
    Musician(const string& g, const string& v, const string& d) : guitar(g), vocals(v), drums(d) {}
    friend Musician operator+(const Musician& musician1, const Musician& musician2)
    {
        string combinedGuitar = musician1.guitar + " & " + musician2.guitar;
        string combinedVocals = musician1.vocals + " & " + musician2.vocals;
        string combinedDrums = musician1.drums + " & " + musician2.drums;

        return Musician(combinedGuitar, combinedVocals, combinedDrums);
    }
    void displaySkills() 
    {
        cout << "Guitar: " << guitar << endl;
        cout << "Vocals: " << vocals << endl;
        cout << "Drums: " << drums << endl;
    }
};

int main() 
{
    Musician john("Lead", "Singer", "Beat");
    Musician jane("Rhythm", "Backup", "Percussion");
    Musician combined = john + jane;
    cout << "John's Skills:" << endl;
    john.displaySkills();
    cout << "\nJane's Skills:" << endl;
    jane.displaySkills();
    cout << "\nCombined Skills:" << endl;
    combined.displaySkills();
    return 0;
}