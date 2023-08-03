#include<iostream>
using namespace std;
class Car
{
    string make, model;
    int year;
    float mileage;
    bool luxury;
public:
    void input()
    {
        cout<<"Enter Company: ";
        cin>>make;
        cout<<"Enter Model: ";
        cin>>model;
        cout<<"Enter Year: ";
        cin>>year;
        cout<<"Enter Mileage: ";
        cin>>mileage;
        cout<<"Enter Luxury: ";
        cin>>luxury;
        cout<<endl;
        cout<<endl;
    }
    void show()
    {
        cout<<"Make: "<<make<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
        cout<<"Mileage: "<<mileage<<endl;
    }
    void updateMileage(float m)
    {
        mileage = m;
    }
    bool checkluxurious()
    {
        return luxury;
    }
};
int main()
{
    Car obj, obj1;
    obj.input();
    obj1.input();
    obj.show();
    obj1.show();
    cout<<"Enter the updated mileage for 1st Car: ";
    int x;
    cin>>x;
    obj.updateMileage(x);
    obj.show();
    bool luxury = obj.checkluxurious();
    cout << "Is the car luxurious? : " << (luxury ? "Yes" : "No") << endl;
    cout<<"Enter the updated mileage for 2nd Car: ";
    int y;
    cin>>y;
    obj1.updateMileage(y);
    obj1.show();
    bool luxury1 = obj1.checkluxurious();
    cout << "Is the car luxurious? : " << (luxury1 ? "Yes" : "No") << endl;
    return 0;
}