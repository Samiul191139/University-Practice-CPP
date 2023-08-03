#include <iostream>
using namespace std;
class Mammals
{
public:
    void mammalInfo()
    {
        cout << "I am a mammal." << endl;
    }
};
class MarineAnimals
{
public:
    void marineAnimalInfo()
    {
        cout << "I am a marine animal." << endl;
    }
};
class BlueWhale : public Mammals, public MarineAnimals
{
public:
    void blueWhaleInfo()
    {
        cout << "I belong to both the categories: Mammals as well as Marine Animals." << endl;
    }
};
int main()
{
    Mammals mammalObj;
    MarineAnimals marineAnimalObj;
    BlueWhale blueWhaleObj;
    mammalObj.mammalInfo();
    marineAnimalObj.marineAnimalInfo();
    blueWhaleObj.blueWhaleInfo();
    blueWhaleObj.mammalInfo();
    blueWhaleObj.marineAnimalInfo();
    return 0;
}