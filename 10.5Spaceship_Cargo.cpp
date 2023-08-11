#include <iostream>
using namespace std;

class Spaceship 
{
private:
    int fuelCapacity;
    int cargoCapacity;

public:
    Spaceship(int fuel, int cargo) : fuelCapacity(fuel), cargoCapacity(cargo) {}

    friend ostream& operator<<(ostream& os, const Spaceship& spaceship)
    {
        os << "Spaceship Information:" << endl;
        os << "Fuel Capacity: " << spaceship.fuelCapacity << " gallons" << endl;
        os << "Cargo Capacity: " << spaceship.cargoCapacity << " tons" << endl;
        return os;
    }
};

int main() 
{
    Spaceship ship(1000, 50);
    cout << ship;
    return 0;
}