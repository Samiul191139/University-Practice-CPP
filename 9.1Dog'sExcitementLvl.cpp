#include <iostream>
using namespace std;
class Dog 
{
private:
    int excitementLevel;

public:
    Dog() : excitementLevel(0) {}

    void displayExcitementLevel() 
    {
        cout << "Max's excitement level: " << excitementLevel << endl;
    }

    void operator++() 
    {
        if (excitementLevel < 100) 
        {
            excitementLevel++;
        } 
        else 
        {
            cout << "Error: Max is already too excited!" << endl;
        }
    }

    void operator--() 
    {
        if (excitementLevel > 0) 
        {
            excitementLevel--;
        } 
        else 
        {
            cout << "Error: Max cannot be less excited!" << endl;
        }
    }
};
int main() 
{
    Dog max;
    max.displayExcitementLevel();
    ++max;
    max.displayExcitementLevel();
    --max;
    max.displayExcitementLevel();
    ++max;
    ++max;
    max.displayExcitementLevel();
    ++max;
    --max;
    max.displayExcitementLevel();
    return 0;
}