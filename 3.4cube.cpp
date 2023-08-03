#include <iostream>
using namespace std;
inline int cube(int &num)
{
    int r = num*num*num;
    cout<<"Cube of the Number is :"<< r;
    return 0;
}
int main()
{
    int num;
    cout<<"Enter a Number :";
    cin>>num;
    cube(num);
    return 0;
}