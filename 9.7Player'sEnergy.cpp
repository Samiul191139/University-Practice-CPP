#include <iostream>
using namespace std;
class Player 
{
private:
    int energy;

public:
    Player() : energy(100) {}

    void displayEnergy() 
    {
        cout << "Player's energy: " << energy << endl;
    }
    void operator!() 
    {
        const int depletionAmount = 10;
        if (energy >= depletionAmount) 
        {
            energy -= depletionAmount;
        } 
        else 
        {
            energy = 0;
        }
    }
};

int main() 
{
    Player player;
    player.displayEnergy();
    !player;
    player.displayEnergy();
    return 0;
}