#include <iostream>
using namespace std;

class Vehicle
{
private:
    double speed;
    double acceleration;

public:
    Vehicle(double s, double a) : speed(s), acceleration(a) {}

    bool operator<(const Vehicle& other) const
    {
        double thisTimeToMaxSpeed = speed / acceleration;
        double otherTimeToMaxSpeed = other.speed / other.acceleration;

        return thisTimeToMaxSpeed < otherTimeToMaxSpeed;
    }
};

int main()
{
    Vehicle car(100, 10);
    Vehicle bike(80, 12);

    if (bike < car)
    {
        cout << "Bike is faster than car." << endl;
    }
    else
    {
        cout << "Car is faster than bike." << endl;
    }
    return 0;
}