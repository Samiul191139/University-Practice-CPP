#include <iostream>
using namespace std;
class Potion 
{
private:
    int potency;
    int duration;

public:
    Potion(int pot, int dur) : potency(pot), duration(dur) {}

    int getPotency() const 
    {
        return potency;
    }
    int getDuration() const 
    {
        return duration;
    }
    Potion operator*(const Potion& other) const 
    {
        int combinedPotency = potency + other.potency;
        int combinedDuration = duration + other.duration;
        return Potion(combinedPotency, combinedDuration);
    }
};
int main() 
{
    Potion potion1(10, 5);
    Potion potion2(15, 8);
    Potion combinedPotion = potion1 * potion2;
    cout << "Potion 1 - Potency: " << potion1.getPotency() << " Duration: " << potion1.getDuration() << endl;
    cout << "Potion 2 - Potency: " << potion2.getPotency() << " Duration: " << potion2.getDuration() << endl;
    cout << "Combined Potion - Potency: " << combinedPotion.getPotency() << " Duration: " << combinedPotion.getDuration() << endl;
    return 0;
}