#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
    string name;

public:
    void setName(const string& animalName)
    {
        name = animalName;
    }

    string getName() const
    {
        return name;
    }
};
class Cat : public Animal
{
private:
    int numLives;

public:
    void setNumLives(int lives)
    {
        numLives = lives;
    }

    int getNumLives() const
    {
        return numLives;
    }
};

int main()
{
    Cat myCat;
    string cat;
    int life;
    cout<<"Enter cat name:";
    cin>>cat;
    cout<<"Enter cat lives:";
    cin>>life;
    myCat.setName(cat);
    myCat.setNumLives(life);
    cout << "Cat Name: " << myCat.getName() << endl;
    cout << "Number of Lives: " << myCat.getNumLives() << endl;
    return 0;
}