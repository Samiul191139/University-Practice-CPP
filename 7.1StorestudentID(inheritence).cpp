#include <iostream>
using namespace std;
class Person 
{
protected:
    string name;

public:
    Person() 
    {
        cout << "Enter Name: ";
        getline(cin, name);
    }

    void display() 
    {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person 
{
private:
    string id;

public:
    Student() : Person() 
    {
        cout << "Enter ID: ";
        cin >> id;
    }

    void show() 
    {
        cout<<"*********Student Information**********"<<endl;
        display();
        cout << "ID: " << id << endl;
    }
};

int main() 
{
    Student p;
    p.show();
    return 0;
}