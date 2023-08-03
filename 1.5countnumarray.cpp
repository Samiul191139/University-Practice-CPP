#include<iostream>
using namespace std;
int main()
{
    int count=0,i;
    int x[4];
    for ( i = 0; i < 4; i++)
    {
        cin>>x[i];
        count++;
    }
    cout<<"Number of digits:"<<count<<endl;

    int countNegative = 0, countEven = 0, countOdd = 0;
    for ( i = 0; i < 4; i++)
    {
        if (x[i] < 0)
        {
            countNegative++;
        }
        if (x[i]%2 == 0 && x[i] > 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }
    cout << "Total Negative numbers: " << countNegative << endl;
    cout << "Total Even numbers: " << countEven << endl;
    cout << "Total Odd numbers: " << countOdd << endl;
        
    return 0;
}