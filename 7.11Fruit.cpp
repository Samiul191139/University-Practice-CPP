#include <iostream>
using namespace std;

class Fruit 
{
protected:
    int numFruits;

public:
    Fruit() : numFruits(0) {}

    void addFruits(int num) 
    {
        numFruits += num;
    }

    int getNumFruits() const 
    {
        return numFruits;
    }
};

class Apples : public Fruit 
{
public:
    void addApples(int num) 
    {
        addFruits(num);
    }

    int getApples() const 
    {
        return getNumFruits();
    }
};

class Mangoes : public Fruit 
{
public:

    void addMangoes(int num) 
    {
        addFruits(num);
    }

    int getMangoes() const 
    {
        return getNumFruits();
    }
};

int main() {
    Apples appleBasket;
    Mangoes mangoBasket;
    int numApples, numMangoes;
    cout << "Enter the number of apples: ";
    cin >> numApples;
    appleBasket.addApples(numApples);
    cout << "Enter the number of mangoes: ";
    cin >> numMangoes;
    mangoBasket.addMangoes(numMangoes);
    cout << "Number of Apples: " << appleBasket.getApples() << endl;
    cout << "Number of Mangoes: " << mangoBasket.getMangoes() << endl;
    cout << "Total Number of Fruits in the Basket: " << appleBasket.getNumFruits() + mangoBasket.getNumFruits() << endl;
    return 0;
}