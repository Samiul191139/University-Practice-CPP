#include <iostream>
using namespace std;
class Alien 
{
private:
    int strength;
    int technologyLevel;
    int diplomacy;

public:
    Alien(int str, int tech, int dip) : strength(str), technologyLevel(tech), diplomacy(dip) {}

    friend bool operator>(const Alien& alien1, const Alien& alien2)
    {
        int score1 = alien1.strength + alien1.technologyLevel + alien1.diplomacy;
        int score2 = alien2.strength + alien2.technologyLevel + alien2.diplomacy;

        return score1 > score2;
    }
};

int main() 
{
    Alien zorgon(80, 70, 60);
    Alien xylor(70, 85, 75);
    if (zorgon > xylor) 
    {
        cout << "Zorgon is more dominant than Xylor." << endl;
    } 
    else 
    {
        cout << "Xylor is more dominant than Zorgon." << endl;
    }
    return 0;
}