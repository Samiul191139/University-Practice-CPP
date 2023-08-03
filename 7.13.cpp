#include <iostream>
#include <string>
using namespace std;
class Vehicle 
{
protected:
    double mileage;
    double price;

public:
    void input() {
        cout << "Enter Mileage: ";
        cin >> mileage;
        cout << "Enter Price: ";
        cin >> price;
    }
};
class Car : public Vehicle 
{
protected:
    double ownershipCost;
    int warranty;
    int seatingCapacity;
    string fuelType;
public:
    void input() {
        Vehicle::input();
        cout << "Enter Ownership Cost: ";
        cin >> ownershipCost;
        cout << "Enter Warranty (in years): ";
        cin >> warranty;
        cout << "Enter Seating Capacity: ";
        cin >> seatingCapacity;
        cin.ignore(); // Ignore the newline character left in the stream from previous input
        cout << "Enter Fuel Type (diesel/petrol): ";
        getline(cin, fuelType);
    }
    void output() {
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Price: $" << price << endl;
        cout << "Ownership Cost: $" << ownershipCost << endl;
        cout << "Warranty: " << warranty << " years" << endl;
        cout << "Seating Capacity: " << seatingCapacity << " seats" << endl;
        cout << "Fuel Type: " << fuelType << endl;
    }
};
class Bike : public Vehicle 
{
protected:
    int numCylinders;
    int numGears;
    string coolingType;
    string wheelType;
    double fuelTankSize;
public:
    void input() {
        Vehicle::input();
        cout << "Enter Number of Cylinders: ";
        cin >> numCylinders;
        cout << "Enter Number of Gears: ";
        cin >> numGears;
        cin.ignore(); // Ignore the newline character left in the stream from previous input
        cout << "Enter Cooling Type (air/liquid/oil): ";
        getline(cin, coolingType);
        cout << "Enter Wheel Type (alloys/spokes): ";
        getline(cin, wheelType);
        cout << "Enter Fuel Tank Size (in inches): ";
        cin >> fuelTankSize;
    }
    void output() {
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Price: $" << price << endl;
        cout << "Number of Cylinders: " << numCylinders << endl;
        cout << "Number of Gears: " << numGears << endl;
        cout << "Cooling Type: " << coolingType << endl;
        cout << "Wheel Type: " << wheelType << endl;
        cout << "Fuel Tank Size: " << fuelTankSize << " inches" << endl;
    }
};
class Audi : public Car 
{
protected:
    string modelType;
public:
    void input() {
        Car::input();
        cout << "Enter Model Type: ";
        getline(cin, modelType);
    }

    void output() {
        cout << "Audi Car Information:" << endl;
        Car::output();
        cout << "Model Type: " << modelType << endl;
    }
};
class Ford : public Car
{
protected:
    string modelType;
public:
    void input() {
        Car::input();
        cout << "Enter Model Type: ";
        getline(cin, modelType);
    }

    void output() {
        cout << "Ford Car Information:" << endl;
        Car::output();
        cout << "Model Type: " << modelType << endl;
    }
};
class Bajaj : public Bike 
{
protected:
    string makeType;
public:
    void input() {
        Bike::input();
        cout << "Enter Make Type: ";
        getline(cin, makeType);
    }
    void output() {
        cout << "Bajaj Bike Information:" << endl;
        Bike::output();
        cout << "Make Type: " << makeType << endl;
    }
};
class TVS : public Bike 
{
protected:
    string makeType;
public:
    void input() {
        Bike::input();
        cout << "Enter Make Type: ";
        getline(cin, makeType);
    }
    void output() {
        cout << "TVS Bike Information:" << endl;
        Bike::output();
        cout << "Make Type: " << makeType << endl;
    }
};
int main() 
{
    Audi audi;
    cout << "Enter Information for Audi Car:" << endl;
    audi.input();
    Ford ford;
    cout << "Enter Information for Ford Car:" << endl;
    ford.input();
    Bajaj bajaj;
    cout << "Enter Information for Bajaj Bike:" << endl;
    bajaj.input();
    TVS tvs;
    cout << "Enter Information for TVS Bike:" << endl;
    tvs.input();
    audi.output();
    cout << endl;
    ford.output();
    cout << endl;
    bajaj.output();
    cout << endl;
    tvs.output();
    return 0;
}