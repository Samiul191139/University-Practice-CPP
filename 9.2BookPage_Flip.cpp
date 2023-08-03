#include <iostream>
using namespace std;
class Book 
{
private:
    int pagesLeft;
    int MAX_PAGES;
public:
    void Display(int pages) 
    {
        pagesLeft = pages;
        cout << "Pages left to read: " << pagesLeft << endl;
    }
    void operator + ()
    {
        pagesLeft = MAX_PAGES;
    }
};
int main() 
{
    int pages, x;
    cout << "Enter Page amount: ";
    cin >> x;
    cout << "Enter the number of pages left to read: ";
    cin >> pages;
    Book myBook;
    cout << "Before flipping the book:" << endl;
    myBook.Display(pages);
    +myBook;
    cout << "After flipping the book:" << endl;
    myBook.Display(x);
    return 0;
}