#include <iostream>
#include <string>
using namespace std;
class Product 
{
private:
    string name;
    double price;
    int quantity;

public:
    void inputDetails() 
    {
        cin.ignore();
        cout << "Enter product name: ";
        getline(cin, name);
        cout << "Enter product price: ";
        cin >> price;
        cin.ignore();
        cout << "Enter product quantity: ";
        cin >> quantity;
    }
    void displayDetails() 
    {
        cout << "Product name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << endl;
    }

    void updateQuantity(int newQuantity) 
    {
        quantity = newQuantity;
    }
};

int main() 
{
    const int numProducts = 2;
    Product products[numProducts];
    for (int i = 0; i < numProducts; i++) 
    {
        cout << "Product " << (i + 1) << ":" << endl;
        products[i].inputDetails();
        cout << endl;
    }
    cout << "Product details:" << endl;
    for (int i = 0; i < numProducts; i++) 
    {
        products[i].displayDetails();
    }
    int n;
    cout<<"Update product No. :";
    cin>>n;
    int newQuantity;
    cout<<"Enter new quantity:";
    cin>>newQuantity;
    products[n-1].updateQuantity(newQuantity);
    cout << "Updated product details:" << endl;
    products[n-1].displayDetails();
    return 0;
}