#include <iostream>
using namespace std;
void drawShape(int shapeType) 
{
    cout << "Drawing shape of type " << shapeType << " with default color and line style." << endl;
}
void drawShape(int shapeType, string color) 
{
    cout << "Drawing shape of type " << shapeType << " with color " << color << " and default line style." << endl;
}
void drawShape(int shapeType, int lineStyle) 
{
    cout << "Drawing shape of type " << shapeType << " with default color and line style " << lineStyle << "." << endl;
}
void drawShape(int shapeType, string color, int lineStyle) 
{
    cout << "Drawing shape of type " << shapeType << " with color " << color << " and line style " << lineStyle << "." << endl;
}

int main() 
{
    drawShape(1);
    drawShape(2, "red");
    drawShape(3, 2);
    drawShape(4, "blue", 1);
    return 0;
}