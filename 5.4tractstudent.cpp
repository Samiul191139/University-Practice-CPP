#include <iostream>
using namespace std;
class Student 
{
private:
    string name;
    bool present;
public:
    void inputDetails() 
    {
        cout << "Enter student name: ";
        cin >> name;
        present = false;
    }
    void markPresent() 
    {
        present = true;
    }
    void displayDetails() 
    {
        cout << "Student name: " << name << endl;
        cout << "Participation status: " << (present ? "Present" : "Absent") << endl;
    }
    bool isPresent()
    {
        return present;
    }
};

int main() 
{
    const int numStudents = 5;
    Student students[numStudents];
    for (int i = 0; i < numStudents; i++) 
    {
        cout << "Student " << (i + 1) << ":" << endl;
        students[i].inputDetails();
        cout << endl;
    }
    students[0].markPresent();
    students[2].markPresent();
    students[4].markPresent();

    cout << "Students who attended the event:" << endl;
    for (int i = 0; i < numStudents; i++) 
    {
        if (students[i].isPresent()) 
        {
            students[i].displayDetails();
            cout << endl;
        }
    }
    return 0;
}