#include <iostream>
using namespace std;
class Person 
{
private:
    string name;
    int age;

public:
    Person(const string& n, int a) : name(n), age(a) 
    {}
    friend bool isOlder(const Person& p1, const Person& p2);
    string getName() const 
    { 
        return name;
    }
};

bool isOlder(const Person& p1, const Person& p2)
{
    return p1.age > p2.age;
}

int main() 
{
    string n1, n2;
    int a1,a2;
    cout << "Enter 1st Person's name: ";
    cin >> n1;
    cout << "Enter 1st Person's Age: ";
    cin >> a1;
    cout << "Enter 2nd Person's name: ";
    cin >> n2;
    cout << "Enter 2nd Person's age: ";
    cin >> a2;
    Person person1(n1, a1);
    Person person2(n2, a2);
    if (isOlder(person1, person2)) 
    {
        cout << person1.getName() << " is older than " << person2.getName() << endl;
    } 
    else 
    {
        cout << person1.getName() << " is younger than " << person2.getName() << endl;
    }
    return 0;
}