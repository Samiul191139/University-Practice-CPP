#include <iostream>
using namespace std;
class Superhero 
{
private:
    int strength;
    int speed;
    int intelligence;
public:
    Superhero(int str, int spd, int intel) : strength(str), speed(spd), intelligence(intel) {}
    Superhero operator+(const Superhero &other) const
    {
        int totalAttributesThis = strength + speed + intelligence;
        int totalAttributesOther = other.strength + other.speed + other.intelligence;

        if (totalAttributesThis > totalAttributesOther) 
        {
            return *this;
        } 
        else 
        {
            return other;
        }
    }
    void displayAttributes()
    {
        cout << "Strength: " << strength << " | Speed: " << speed << " | Intelligence: " << intelligence << endl;
    }
};

int main() 
{
    Superhero hero1(80, 70, 90);
    Superhero hero2(70, 85, 95);
    cout << "Hero 1 attributes: ";
    hero1.displayAttributes();
    cout << "Hero 2 attributes: ";
    hero2.displayAttributes();
    Superhero winner = hero1 + hero2;
    cout << "The winner has the following attributes: ";
    winner.displayAttributes();
    return 0;
}