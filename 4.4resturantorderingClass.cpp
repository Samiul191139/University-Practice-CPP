#include <iostream>
using namespace std;
class MenuItem
{
private:
    string name,description;
    float price;
public:
    void input()
    {
        cout<<"Product Name: ";
        cin>>name;
        cout<<"Product Price: ";
        cin>>price;
        cin.ignore();
        cout<<"Product Description: ";
        getline(cin, description);
    }
    void display()
    {
        cout<<endl<<endl;
        cout<<"Product Name: "<<name<<endl;
        cout<<"Product Price: "<<price<<endl;
        cout<<"Product Description: "<<description<<endl;
    }
};
int main()
{
    MenuItem obj, obj1;
    obj.input();
    obj1.input();
    obj.display();
    obj1.display();
    return 0;
}