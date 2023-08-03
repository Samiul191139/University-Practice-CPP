#include <iostream>
using namespace std;
class Product
{
private:
    string name,id;
    int quantity;
    float price;
public:
void assign_value(string a,string b,float c,int d)
    {
        id=a;
        name=b;
        price=c;
        quantity=d;
    }
    void show()
    {
        cout<<"ID= "<<id<<endl;
        cout<<"Name= "<<name<<endl;
        cout<<"Price= "<<price<<endl;
        cout<<"Quantity= "<<quantity<<endl;
    }
    void update(int e)
    {
        quantity = e;
    }
};

int main()
{
    int x;
    Product obj;
    obj.assign_value("P001","Smartphone",499.99,10);
    obj.show();
    cout<<"Enter new Quantity: ";
    cin>>x;
    cout<<endl<<"After updating the quantity:"<<endl;
    obj.update(x);
    obj.show();
    return 0;
}