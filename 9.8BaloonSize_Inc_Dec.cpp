#include <iostream>
using namespace std;
class Balloon 
{
private:
    int size;

public:
    Balloon() : size(10) {}
    void displaySize() 
    {
        cout << "Balloon's size: " << size << endl;
    }
    void operator+() 
    {
        const int growthAmount = 5;
        if (size + growthAmount <= 50) 
        {
            size += growthAmount;
        } 
        else 
        {
            cout << "Error: Balloon is too large!" << endl;
        }
    }
    void operator-() 
    {
        const int shrinkAmount = 3;
        if (size - shrinkAmount >= 5) 
        {
            size -= shrinkAmount;
        } 
        else 
        {
            cout << "Error: Balloon is too small!" << endl;
        }
    }
};

int main() 
{
    Balloon balloon;
    
    balloon.displaySize();
    +balloon;
    balloon.displaySize();
    -balloon;
    balloon.displaySize();
    return 0;
}