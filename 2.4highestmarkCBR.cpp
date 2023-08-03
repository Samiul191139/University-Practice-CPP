#include <iostream>
using namespace std;
void findHighestMark(int &r, int &h, int &p) 
{
  int highestMark = r;
  if (h > highestMark || p > highestMark) 
  {
    if (h > p)
    {
     highestMark = h;
     cout<<"Hasan got the highest Mark"<<endl;
    }
    else 
    {
    highestMark = p;
    cout<<"Purno got the highest Mark"<<endl;
    }
  }
  else
  {
    cout<<"Rakib got the highest Mark"<<endl;
  }
  cout << "The highest mark is " << highestMark << endl;
}
int main() 
{
  int r, h, p;
  cout << "Enter Rakib's mark: ";
  cin >> r;
  cout << "Enter Hasan's mark: ";
  cin >> h;
  cout << "Enter Purno's mark: ";
  cin >> p;
  findHighestMark(r, h, p);
  return 0;
}