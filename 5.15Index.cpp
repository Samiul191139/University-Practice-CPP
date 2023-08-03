#include <iostream>
#include <string>
using namespace std;

class Directory 
{
private:
    string name;
    string address;
    string telephoneNumber;
    string mobileNumber;
    string headOfFamily;

public:
    void setDetails(const string& personName, const string& personAddress, const string& personTelephoneNumber,
                    const string& personMobileNumber, const string& personHeadOfFamily) 
    {
        name = personName;
        address = personAddress;
        telephoneNumber = personTelephoneNumber;
        mobileNumber = personMobileNumber;
        headOfFamily = personHeadOfFamily;
    }
    void displayDetails() const 
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Telephone Number: " << telephoneNumber << endl;
        cout << "Mobile Number: " << mobileNumber << endl;
        cout << "Head of Family: " << headOfFamily << endl;
    }
};

int main() 
{
    Directory personDirectory[5];
    string name, address, telephoneNumber, mobileNumber, headOfFamily;
    for (int i = 0; i < 5; i++)
    {
    cout << "Enter Name for family "<<i+1;
    getline(cin >> ws, name);
    cout << "Enter Address: ";
    getline(cin >> ws, address);
    cout << "Enter Telephone Number (if available with STD code): ";
    getline(cin >> ws, telephoneNumber);
    cout << "Enter Mobile Number (if available): ";
    getline(cin >> ws, mobileNumber);
    cout << "Enter Head of Family: ";
    getline(cin >> ws, headOfFamily);
    personDirectory[i].setDetails(name, address, telephoneNumber, mobileNumber, headOfFamily);
    cout << endl << "Person Details:" << endl;
    personDirectory[i].displayDetails();
    }
    return 0;
}