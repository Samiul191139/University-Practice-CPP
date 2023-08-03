#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void setName(const string& personName)
    {
        name = personName;
    }

    void setAge(int personAge)
    {
        age = personAge;
    }

    string getName() const
    {
        return name;
    }

    int getAge() const
    {
        return age;
    }
};

class Student
{
protected:
    string studentID;
    double GPA;

public:
    void setStudentID(const string& id)
    {
        studentID = id;
    }

    void setGPA(double gpa)
    {
        GPA = gpa;
    }

    string getStudentID() const
    {
        return studentID;
    }

    double getGPA() const
    {
        return GPA;
    }
};

class StudentAthlete : public Student, public Person
{
private:
    string sport;

public:
    void setSport(const string& sports)
    {
        sport = sports;
    }

    string getSport() const
    {
        return sport;
    }
};

int main()
{
    StudentAthlete studentAthlete;
    string name, studentID, sport;
    int age;
    double gpa;

    cout << "Enter student name: ";
    getline(cin, name);
    studentAthlete.setName(name);

    cout << "Enter student age: ";
    cin >> age;
    studentAthlete.setAge(age);
    cin.ignore();
    cout << "Enter student ID: ";
    getline(cin, studentID);
    studentAthlete.setStudentID(studentID);

    cout << "Enter student GPA: ";
    cin >> gpa;
    studentAthlete.setGPA(gpa);
    cin.ignore();
    cout << "Enter sport played by the student athlete: ";
    getline(cin, sport);
    studentAthlete.setSport(sport);

    cout << "Student Athlete Details:" << endl;
    cout << "Name: " << studentAthlete.getName() << endl;
    cout << "Age: " << studentAthlete.getAge() << endl;
    cout << "Student ID: " << studentAthlete.getStudentID() << endl;
    cout << "GPA: " << studentAthlete.getGPA() << endl;
    cout << "Sport: " << studentAthlete.getSport() << endl;

    return 0;
}