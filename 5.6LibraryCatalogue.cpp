#include <iostream>
#include <string>
using namespace std;
class Book 
{
private:
    string title;
    string author;
    bool available;

public:
    void inputDetails() 
    {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter book author: ";
        getline(cin, author);
        available = true;
    }
    void displayDetails() 
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Availability: " << (available ? "Available" : "Borrowed") << endl;
        cout << endl;
    }
    void markAsBorrowed() 
    {
        available = false;
    }
    bool isAvailable() 
    {
        return available;
    }
};

int main() 
{
    const int numBooks = 10;
    Book books[numBooks];
    for (int i = 0; i < numBooks; i++) 
    {
        cout << "Book " << (i + 1) << ":" << endl;
        books[i].inputDetails();
        cout << endl;
    }
    cout << "Available books:" << endl;
    for (int i = 0; i < numBooks; i++) 
    {
        if (books[i].isAvailable()) 
        {
            books[i].displayDetails();
        }
    }
    cout << "Enter the book number to mark as borrowed: ";
    int bookNum;
    cin >> bookNum;
    books[bookNum - 1].markAsBorrowed();
    cout << "Available books after marking one as borrowed:"<< endl;
    for (int i = 0; i < numBooks; i++) 
    {
        if (books[i].isAvailable()) 
        {
            books[i].displayDetails();
        }
    }
    return 0;
}