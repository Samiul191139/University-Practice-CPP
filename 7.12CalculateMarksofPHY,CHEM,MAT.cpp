#include <iostream>
#include <string>
using namespace std;

class Marks
{
public:
    int rollNumber;
    string name;

    void input()
    {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
    }
};

class Physics : public Marks
{
public:
    int physicsMarks;

    void inputPhysics()
    {
        cout << "Enter Physics Marks: ";
        cin >> physicsMarks;
    }
};

class Chemistry : public Marks
{
public:
    int chemistryMarks;

    void inputChemistry()
    {
        cout << "Enter Chemistry Marks: ";
        cin >> chemistryMarks;
    }
};

class Mathematics : public Marks
{
public:
    int mathMarks;

    void inputMathematics()
    {
        cout << "Enter Mathematics Marks: ";
        cin >> mathMarks;
    }
};
int main()
{
    int numStudents;
    cout << "Enter the number of students in the class: ";
    cin >> numStudents;
    Physics physicsMarks[numStudents];
    Chemistry chemistryMarks[numStudents];
    Mathematics mathMarks[numStudents];

    for (int i = 0; i < numStudents; i++)
    {
        cout << "Student " << (i + 1) << ":" << endl;
        physicsMarks[i].input();
        physicsMarks[i].inputPhysics();
        chemistryMarks[i].inputChemistry();
        mathMarks[i].inputMathematics();
        cout << endl;
    }
    int totalPhysics = 0, totalChemistry = 0, totalMathematics = 0;
    for (int i = 0; i < numStudents; i++)
    {
        totalPhysics += physicsMarks[i].physicsMarks;
        totalChemistry += chemistryMarks[i].chemistryMarks;
        totalMathematics += mathMarks[i].mathMarks;
    }

    double averagePhysics = static_cast<double>(totalPhysics) / numStudents;
    double averageChemistry = static_cast<double>(totalChemistry) / numStudents;
    double averageMathematics = static_cast<double>(totalMathematics) / numStudents;

    cout << "Average Physics Marks: " << averagePhysics << endl;
    cout << "Average Chemistry Marks: " << averageChemistry << endl;
    cout << "Average Mathematics Marks: " << averageMathematics << endl;
    return 0;
}