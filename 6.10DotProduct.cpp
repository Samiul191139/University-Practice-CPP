#include <iostream>
using namespace std;
class Vector 
{
private:
    double x;
    double y;
    double z;
public:
    Vector(double xVal, double yVal, double zVal) 
    {
        x = xVal;
        y = yVal;
        z = zVal;
    }
    friend double dotProduct(const Vector& v1, const Vector& v2);
};

double dotProduct(const Vector& v1, const Vector& v2) 
{
    double dotProd = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
    return dotProd;
}
int main() 
{
    double x1,y1,z1,x2,y2,z2;
    cout<<"Enter x,y and z componenets for 1st vector:";
    cin>>x1>>y1>>z1;
    cout<<"Enter x,y and z componenets for 2nd vector:";
    cin>>x2>>y2>>z2;
    Vector v1(x1, y1, z1);
    Vector v2(x2, y2, z2);
    double result = dotProduct(v1, v2);
    cout << "Dot product: " << result << endl;
    return 0;
}