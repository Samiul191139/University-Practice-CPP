#include <iostream>
using namespace std;
class Shape 
{
public:
    float width, height;

    void input() 
    {
        cout << "Enter Height: ";
        cin >> height;
        cout << "Enter Width: ";
        cin >> width;
    }
};
class Rectangle : public Shape 
{
public:
    float area;

    void Rec_area() 
    {
        area = height * width;
    }
    void getArea() 
    {
        cout << "The area of the Rectangle is: " << area << endl;
    }
};
int main() 
{
    Rectangle r;
    r.input();
    r.Rec_area();
    r.getArea();
    return 0;
}