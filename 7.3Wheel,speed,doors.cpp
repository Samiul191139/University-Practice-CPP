#include <iostream>
using namespace std;
class Vehicle
{
public:
    int wheel;
    double speed;
    void input()
    {
        cout<<"Enter Wheel Number : ";
        cin>>wheel;
        cout<<"Enter Top speed(MPH) : ";
        cin>>speed;
    }
};
class Car : public Vehicle
{
    public:
    int door;
    int storedoor()
    {
        cout<<"Enter Door numbers :";
        cin>>door;
        return door;
    }
    void output()
    {
        cout<<"Wheels :"<<wheel<<endl;
        cout<<"Top-speed :"<<speed<<" MPH"<<endl;
        cout<<"Number of Doors :"<<door<<endl;
    }

};

int main()
{
    Car c;
    c.input();
    c.storedoor();
    c.output();
    return 0;
}