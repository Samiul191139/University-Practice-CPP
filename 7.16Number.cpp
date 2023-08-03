#include <iostream>
using namespace std;
class Number 
{
protected:
    int num;

public:
    Number(int n) : num(n) 
    {

    }
};

class Square : public Number 
{
protected:
    int sqr;

public:
    Square(int n) : Number(n) 
    {
        sqr = num * num;
    }

    void display() 
    {
        cout << "Square of " << num << " is " << sqr << endl;
    }
};

class Cube : public Number 
{
protected:
    int cube;

public:
    Cube(int n) : Number(n) 
    {
        cube = num * num * num;
    }

    void print() 
    {
        cout << "Cube of " << num << " is " << cube << endl;
    }
};

int main() 
{
    int inputNum;
    cout << "Enter a number: ";
    cin >> inputNum;
    Square squareObj(inputNum);
    squareObj.display();
    Cube cubeObj(inputNum);
    cubeObj.print();
    return 0;
}