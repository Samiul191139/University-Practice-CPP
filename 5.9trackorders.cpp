#include <iostream>
#include <string>
using namespace std;
const int MAX_CUSTOMERS = 7;

class Customer 
{
private:
    string name;
    string order;

public:
    void setDetails(const string& customerName, const string& customerOrder) 
    {
        name = customerName;
        order = customerOrder;
    }

    void addOrder(const string& newOrder) 
    {
        order += " " + newOrder;
    }

    void displayDetails() const 
    {
        cout << "Customer Name: " << name << endl;
        cout << "Order: " << order << endl;
    }
};

int main() 
{
    Customer customers[MAX_CUSTOMERS];
    for (int i = 0; i < MAX_CUSTOMERS; ++i) 
    {
        string name, order;
        cout << "Enter Customer Name: ";
        getline(cin >> ws, name);
        cout << "Enter Customer Order: ";
        getline(cin >> ws, order); 

        customers[i].setDetails(name, order);
        cout << endl;
    }
    for (int i = 0; i < MAX_CUSTOMERS; ++i) 
    {
        cout << "Customer " << i + 1 << " Details:" << endl;
        customers[i].displayDetails();
        cout << endl;
    }
    return 0;
}