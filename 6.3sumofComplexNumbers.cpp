#include <iostream>
using namespace std;

class SumComplex 
{
private:
    int x1, y1, x2, y2;

public:
    void firstNum(int x, int y) 
    {
        x1 = x;
        y1 = y;
        cout << "First Complex Number: " << x1 << " + " << y1 << "i" << endl;
    }

    void secNum(int x, int y) 
    {
        x2 = x;
        y2 = y;
        cout << "Second Complex Number: " << x2 << " + " << y2 << "i" << endl;
    }

    friend void sum2num(SumComplex obj);
};
void sum2num(SumComplex obj) 
{
    int x3 = obj.x1 + obj.x2;
    int y3 = obj.y1 + obj.y2;
    cout << "Sum of Complex Numbers: " << x3 << " + " << y3 << "i" << endl;
}

int main() 
{
    SumComplex obj;

    obj.firstNum(2, 3);
    obj.secNum(4, 5);
    sum2num(obj);

    return 0;
}