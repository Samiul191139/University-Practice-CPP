#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
  int dis;
  float sf,mil;
  cout<<"Enter Total distance traveled(km):";
  cin>>dis;
  cout<<"Spent fuels(l):";
  cin>>sf;
  mil = dis/sf;
  cout << fixed << setprecision(2);
  cout<<"Bike's Mileage:"<<mil;
  return 0;
}