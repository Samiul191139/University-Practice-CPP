#include <iostream>
using namespace std;
class Student 
{
private:
    float height;

public:
    void inputHeight() 
    {
        cout << "Enter the height of the student: ";
        cin >> height;
    }
    float getHeight() 
    {
        return height;
    }
};

int main()
{
    int numStudents;
    cout << "Enter the number of students in the class: ";
    cin >> numStudents;

    Student students[numStudents];

    for (int i = 0; i < numStudents; i++) 
    {
        cout << "Student " << (i + 1) << ":" << endl;
        students[i].inputHeight();
        cout << endl;
    }
    float totalHeight = 0;
    for (int i = 0; i < numStudents; i++) 
    {
        totalHeight += students[i].getHeight();
    }
    float averageHeight = totalHeight / numStudents;
    cout << "Average height of the students: " << averageHeight << endl;
    return 0;
}