#include <iostream>
using namespace std;
inline int decimalToBinary(int decimal) 
{
  int binary = 0, remainder, product = 1;

  while (decimal != 0) 
  {
    remainder = decimal % 2;
    binary = binary + (remainder * product);
    decimal = decimal / 2;
    product *= 10;
  }
  return binary;
}
int main() 
{
  int decimal;
  cout << "Enter a decimal number: ";
  cin >> decimal;
  int binary = decimalToBinary(decimal);
  cout << "The binary equivalent is: " << binary << endl;
  return 0;
}