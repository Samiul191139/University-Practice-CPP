#include <iostream>
using namespace std;
class Date 
{
private:
    int year;
    int month;
    int day;
public:
    Date(int y, int m, int d) 
    {
        year = y;
        month = m;
        day = d;
    }
    int getYear() const 
    {
        return year;
    }
    friend bool isLeapYear(const Date& date);
};
bool isLeapYear(const Date& date) 
{
    int year = date.getYear();
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
    {
        return true;
    } 
    else 
    {
        return false;
    }
}
int main() 
{
    int y, m, d;
    cout << "Enter year: ";
    cin >> y;
    cout << "Enter month: ";
    cin >> m;
    cout << "Enter day: ";
    cin >> d;
    Date date(y, m, d);
    if (isLeapYear(date)) 
    {
        cout << date.getYear() << " is a leap year." << endl;
    } 
    else 
    {
        cout << date.getYear() << " is not a leap year." << endl;
    }
    return 0;
}