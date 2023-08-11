#include <iostream>
using namespace std;

class Spell
{
private:
    int power;
    int element;

public:
    Spell(int p, int e) : power(p), element(e) {}

    bool operator==(const Spell& other) const
    {
        if (power == other.power && element == other.element)
        {
            cout << "Both spells are equal in power and element." << endl;
            return true;
        }
        else
        {
            cout << "Spells are not equal in power and element." << endl;
            return false;
        }
    }
};

int main()
{
    Spell spell1(10, 1);
    Spell spell2(15, 2);
    spell1 == spell2;
    return 0;
}