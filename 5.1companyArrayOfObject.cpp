#include <iostream>
#include <string>
using namespace std;
class Employee 
{
private:
    string name;
    float salary;
    string dateOfJoining;
public:
    void input() 
    {
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
        cin.ignore();
        cout << "Enter Date of Joining: ";
        getline(cin, dateOfJoining);
    }
    void display() 
    {
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Date of Joining: " << dateOfJoining << endl;
    }
};
int main() 
{
    Employee employees[10];
    for (int i = 0; i < 10; i++) 
    {
        cout << "Enter details of Employee " << (i + 1) << ":" << endl;
        employees[i].input();
        cout << endl;
    }
    cout << "Employee Details:" << endl;
    for (int i = 0; i < 10; i++) 
    {
        cout << "Employee " << (i + 1) << ":" << endl;
        employees[i].display();
        cout << endl;
    }
    return 0;
}