#include <iostream>
using namespace std;
long addTwoNumbers(long &n1, long &n2) 
{
   long sum;
   sum = n1 + n2;
   return sum;
}
int main()
{
   long fno, sno, sum;
   cout<<"Add two numbers using call by reference:"<<endl;
   cout<<"Input the first number : ";
   cin>>fno;
   cout<<"Input the second  number : ";
   cin>>sno;
   sum = addTwoNumbers(fno, sno);
   cout<<"The sum of "<<fno<<" and "<<sno<<" is "<<sum<<endl;
   return 0;
}