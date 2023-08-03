#include <iostream>
#include <string>
using namespace std;
class Shape
{
protected:
    double width, height;

public:
    void setDimensions(double w, double h)
    {
        width = w;
        height = h;
    }
};

class Color
{
protected:
    string color;

public:
    void setColor(const string &c)
    {
        color = c;
    }
};

class ColoredShape : public Shape, public Color
{
public:
    void display()
    {
        cout << "Width: " << width << " units" << endl;
        cout << "Height: " << height << " units" << endl;
        cout << "Color: " << color << endl;
    }
};

int main()
{
    ColoredShape cs;
    double width, height;
    string color;
    cout << "Enter Width of Shape: ";
    cin >> width;
    cout << "Enter Height of Shape: ";
    cin >> height;
    cout << "Enter Color of Shape: ";
    cin.ignore();
    getline(cin, color);

    cs.setDimensions(width, height);
    cs.setColor(color);

    cout << "Colored Shape Details:" << endl;
    cs.display();
    return 0;
}