#include<iostream>
using namespace std;
int main ()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    switch (num > 0)
    {
        case true:
            cout << "The number is positive";
            break;
        case false:
            switch (num < 0)
            {
                case true:
                    cout << "The number is negative";
                    break;
                case false:
                    cout << "The number is zero";
                    break;
            }
            break;
    }
    return 0;
}