#include <iostream>
using namespace std;
void calculate(int a, int b)
{
    cout<<"Sum:"<< a+b <<endl;
    cout<<"Subtract:"<< a-b <<endl;
}
void calculate(double a, double b)
{
    cout<<"Sum:"<< a+b <<endl;
    cout<<"Subtract:"<< a-b <<endl;
}
void calculate(long double a, long double b)
{
    cout<<"Sum:"<< a+b <<endl;
    cout<<"Subtract:"<< a-b <<endl;
}
int main()
{
    calculate(5, 2);
    calculate(3.14, 1.5);
    calculate(11111.14567, 52316.78545);
    return 0;
}