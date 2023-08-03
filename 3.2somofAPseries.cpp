#include<iostream>
using namespace std;
inline int sumAP(int a, int d, int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++) 
  {
    sum += a + i * d;
    //cout << sum << endl;
  }
  return sum;
}
int main() 
{
  int a, d, n;
  cout << "Enter the first term: ";
  cin >> a;
  cout << "Enter the common difference: ";
  cin >> d;
  cout << "Enter the number of terms: ";
  cin >> n;
  int sum = sumAP(a, d, n);
  cout << "The sum of the AP series is: " << sum << endl;
  return 0;
}