#include<iostream>
#include<cmath>
using namespace std;

bool armstrong(int num)
{
    int count=0,temp = num;
    while (temp > 0)
    {
        count++;
        temp /= 10;
    }
    //cout<<count<<endl;
    temp = num;
int sum = 0;
    while (temp > 0)
    {
        int rem = temp % 10;
        sum += pow(rem, count);
        temp /= 10;
    }
  return sum == num;
  //cout<<sum;
}
bool prime(int num)
{
    int i=2;
    while (i <= num/2)
    {
        if (num%i == 0)
        {
            return false;
        }
        i++;
    }
return true;
}
bool perfect(int num)
{
    int i=1, sum=0;
    while (i <= num/2)
    {
        if (num%i == 0)
        {
            sum += i;
        }
        i++;
    }
    return sum == num;
}
int main()
{
    int num;
    cin>>num;
    //armstrong(num);
    //bool sum1 = armstrong(num);
if(armstrong(num))
    {
        cout<<num<<" is an Armstrong Number.\n";
    }
else
    {
        cout<<num<<" is not an Armstrong Number.\n";
    }

if (prime(num))
    {
        cout<<num<<" is a Prime number.\n";
    }
else
    {
        cout<<num<<" is not a Prime number.\n";
    }

if (perfect(num))
{
    cout<<num<<" is a Perfect number.";
}
else
{
    cout<<num<<" is not a Perfect number.";
}
return 0;
}