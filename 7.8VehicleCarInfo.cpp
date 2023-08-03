#include <iostream>
using namespace std;
class Vehicle
{
protected:
    int numWheels;
    double topSpeed;
public:
    void setVehicle(int wheels, double speed)
    {
        numWheels = wheels;
        topSpeed = speed;
    }
};
class Engine
{
protected:
    int horsepower;
public:
    void setHorsepower(int hp)
    {
        horsepower = hp;
    }
};
class Car : public Vehicle, public Engine
{
private:
    int numDoors;
public:
    void setCarDetails(int wheels, double speed, int hp, int doors)
    {
        setVehicle(wheels, speed);
        setHorsepower(hp);
        numDoors = doors;
    }
    void display()
    {
        cout << "Number of Wheels: " << numWheels << endl;
        cout << "Top Speed: " << topSpeed << " MPH" << endl;
        cout << "Horsepower: " << horsepower << " HP" << endl;
        cout << "Number of Doors: " << numDoors << endl;
    }
};
int main()
{
    Car myCar;
    int wheels, hp, doors;
    double speed;
    cout << "Enter Number of Wheels: ";
    cin >> wheels;
    cout << "Enter Top Speed (MPH): ";
    cin >> speed;
    cout << "Enter Horsepower: ";
    cin >> hp;
    cout << "Enter Number of Doors: ";
    cin >> doors;

    myCar.setCarDetails(wheels, speed, hp, doors);
    cout << "\nCar Details:" << endl;
    myCar.display();
    return 0;
}