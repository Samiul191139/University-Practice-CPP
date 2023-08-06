#include <iostream>
using namespace std;
class Tree
{
private:
    int age;
public:
    Tree(int initialAge) : age(initialAge) {}
    void displayAge ()
    {
        cout<<"Tree's age: "<<age<<" years old.";
    }
    void operator ++()
    {
        age++;
    }
};
int main ()
{
    Tree myTree(5);
    ++myTree;
    myTree.displayAge();
    return 0;
}