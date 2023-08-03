#include <iostream>
#include<cmath>
using namespace std;
class Circle
{
private:
    float radius;
    float centerX,centerY;
public:
    Circle(float r, float x, float y)
    {
        radius = r;
        centerX = x;
        centerY = y;
    }
    friend float findCircumference(Circle obj);
};

float findCircumference(Circle obj)
{
    float circumference = 2 * 3.1416 * obj.radius;
    return circumference;
}
int main()
{
    float radius,centerX,centerY;
    cout<<"Enter Radius of Circle: ";
    cin>> radius;
    cout<<"Enter X axis:";
    cin>>centerX;
    cout<<"Enter Y axis:";
    cin>>centerY;
    Circle obj( radius, centerX, centerY);
    float circumference= findCircumference(obj);
    cout << "The circumference of the circle is: " << circumference << endl;
    return 0;
}