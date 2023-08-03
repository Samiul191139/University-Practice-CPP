#include <iostream>
#include <iomanip>
using namespace std;
double add(double a, double b) 
{
    return a + b;
}
double subtract(double a, double b) 
{
    return a - b;
}
double multiply(double a, double b) 
{
    return a * b;
}
double divide(double a, double b) 
{
    return a / b;
}
int main() 
{
    double currency1, currency2;
    cin>>currency1>>currency2;
    cout << fixed << setprecision(2);
    cout << "Addition: " << add(currency1, currency2) << endl;
    cout << "Subtraction: " << subtract(currency1, currency2) << endl;
    cout << fixed << setprecision(4);
    cout << "Multiplication: " << multiply(currency1, currency2) << endl;
    cout << "Division: " << divide(currency1, currency2) << endl;
    return 0;
}