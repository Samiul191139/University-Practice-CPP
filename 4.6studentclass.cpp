#include <iostream>
using namespace std;
class Student
{
private:
    string id,name;
    int grade[4];
public:
    void input()
    {
        cout<<"Enter Student ID: ";
        cin>>id;
        cin.ignore();
        cout<<"Enter Student Name: ";
        getline(cin, name);
        cout<<"Enter Student Grade: ";
        for (int i = 0; i < 3; i++)
        {
            cin>>grade[i];
        }
    }
    void show()
    {
        cout<<"Student ID: "<<id<<endl;
        cout<<"Student name: "<<name<<endl;
        cout<<"Grades: ";
        for (int n = 0; n < 3; n++)
        {
            cout<<grade[n]<<" ";
        }
        cout<<endl;
    }
    void calculate(int x)
    {
        float newgrade = (grade[0]+grade[1]+grade[2]+x)/4;
        cout<<"Average Grade: "<<newgrade<<endl;
    }
};
int main()
{
    Student obj;
    obj.input();
    obj.show();
    cout<<endl<<endl;
    int x;
    cout<<"Enter a new Grade: ";
    cin>>x;
    obj.calculate(x);
    return 0;
}