#include <iostream>
using namespace std;

class Student 
{
private:
    int rollNumber;
    int marks[3];

public:
    static int count;
    float averageMarks;
    Student() 
    {
        rollNumber = ++count;
    }
    void inputMarks() 
    {
        cout << "Enter marks for Student " << rollNumber << " -----" << endl;
        for (int i = 0; i < 3; i++) 
        {
            cout << "Enter marks for Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }
    void calculateAverageMarks() 
    {
        int totalMarks = 0;
        for (int i = 0; i < 3; i++) 
        {
            totalMarks += marks[i];
        }
        averageMarks = totalMarks / 3.0;
    }
    void displayDetails() 
    {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Average Marks: " << averageMarks << endl;
    }
};

int Student::count = 0;
int main() 
{
    Student students[8];
    for (int i = 0; i < 8; i++) 
    {
        students[i].inputMarks();
        students[i].calculateAverageMarks();
        cout << endl;
    }
    cout << "Student Details:" << endl;
    for (int i = 0; i < 8; i++) 
    {
        students[i].displayDetails();
        cout << endl;
    }
    return 0;
}