#include <iostream>
using namespace std;

class RollerCoaster 
{
private:
    int excitementLevel;

public:
    RollerCoaster() : excitementLevel(10) {}
    void displayExcitementLevel() 
    {
        cout << "Excitement Level: " << excitementLevel << endl;
    }

    void operator-() 
    {
        if (excitementLevel > 1) 
        {
            excitementLevel--;
        }
    }
};
int main() 
{
    RollerCoaster rollerCoaster;
    rollerCoaster.displayExcitementLevel();
    -rollerCoaster;
    rollerCoaster.displayExcitementLevel();
    -rollerCoaster;
    rollerCoaster.displayExcitementLevel();
    return 0;
}