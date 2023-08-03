#include <iostream>
#include <string>
using namespace std;
class Car 
{
private:
    string brand;
    double fastestLapTime;
public:
    void inputDetails() 
    {
        cout << "Enter car brand: ";
        getline(cin, brand);
        cout << "Enter fastest lap time: ";
        cin >> fastestLapTime;
        cin.ignore();
    }
    void displayDetails() 
    {
        cout << "Car brand: " << brand << endl;
        cout << "Fastest lap time: " << fastestLapTime << " seconds" << endl;
        cout << endl;
    }
    double getFastestLapTime() 
    {
        return fastestLapTime;
    }
    void update() 
    {
    cout << "Enter updated lap time: ";
    cin >> fastestLapTime;
    cin.ignore();
    cout << "Lap time updated successfully!" << endl;
    }
};

int main() 
{
    const int numCars = 6;
    Car cars[numCars];
    for (int i = 0; i < numCars; i++) 
    {
        cout << "Car " << (i + 1) << ":" << endl;
        cars[i].inputDetails();
        cout << endl;
    }
    cout << "Car details with fastest lap times:" << endl;
    for (int i = 0; i < numCars; i++) 
    {
        cars[i].displayDetails();
    }
    int n;
    cout << "Enter Car number to update lap time: ";
    cin >> n;
    cin.ignore();
    if (n >= 1 && n <= numCars) 
    {
        cars[n-1].update();
        cars[n-1].displayDetails();
    } 
    else 
    {
        cout << "Invalid Car number." << endl;
    }
    return 0;
}