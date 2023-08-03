#include <iostream>
using namespace std;

class Rectangle 
{
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) 
    {
        length = l;
        width = w;
    }
    friend double findArea(const Rectangle &rect);
};

double findArea(const Rectangle &rect)
{
    return rect.length * rect.width;
}
int main() 
{
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    Rectangle rect(length, width);
    double area = findArea(rect);
    cout << "The area of the rectangle is: " << area << endl;
    return 0;
}