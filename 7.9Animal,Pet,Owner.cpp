#include <iostream>
#include <string>
using namespace std;
class Animal
{
protected:
    string name;
    int age;
public:
    void setAnimal(const string &animalName, int animalAge)
    {
        name = animalName;
        age = animalAge;
    }
    void displayAnimal()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
    }
};
class Pet
{
protected:
    string owner;
public:
    void setOwner(const string &ownerName)
    {
        owner = ownerName;
    }

    void displayOwner()
    {
        cout << "Owner: " << owner << endl;
    }
};
class PetAnimal : public Animal, public Pet
{
public:
    void displayPetAnimal()
    {
        displayAnimal();
        displayOwner();
    }
};
int main()
{
    PetAnimal myPet;
    string animalName, ownerName;
    int animalAge;
    cout << "Enter the name of the animal: ";
    getline(cin, animalName);
    cout << "Enter the age of the animal: ";
    cin >> animalAge;
    cin.ignore();
    cout << "Enter the owner's name: ";
    getline(cin, ownerName);
    myPet.setAnimal(animalName, animalAge);
    myPet.setOwner(ownerName);

    cout << "\nPet Animal Details:" << endl;
    myPet.displayPetAnimal();
    return 0;
}