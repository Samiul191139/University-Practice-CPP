#include <iostream>
using namespace std;
class TimeTraveler 
{
private:
    int yearFrom;

public:
    TimeTraveler(int year) : yearFrom(year) {}
    int getYearFrom() const 
    {
        return yearFrom;
    }
    bool operator>(const TimeTraveler& other) const 
    {
        return yearFrom < other.yearFrom;
    }
};
int main() 
{
    TimeTraveler traveler1(1200);
    TimeTraveler traveler2(1500);
    if (traveler1 > traveler2) 
    {
        cout << "Traveler2 comes from a more distant past." << endl;
    } 
    else 
    {
        cout << "Traveler1 comes from a more distant past." << endl;
    }
    return 0;
}