#include <iostream>
using namespace std;
    void simulate(double mass, double velocity) 
    {
        cout << "Simulating object with mass: " << mass << " and velocity: " << velocity << endl;
    }
    void simulate(double mass, double velocity, double elasticity) 
    {
        cout << "Simulating object with mass: " << mass << ", velocity: " << velocity
             << ", and elasticity: " << elasticity << endl;
    }
    void simulate(double mass, double velocity, double elasticity, double acceleration) 
    {
        cout << "Simulating object with mass: " << mass << ", velocity: " << velocity
             << ", elasticity: " << elasticity << ", and acceleration: " << acceleration << endl;
    }
int main() 
{
    simulate(10.0, 5.0);
    simulate(5.0, 3.0, 0.8);
    simulate(8.0, 2.0, 0.9, 10.0);
    return 0;
}