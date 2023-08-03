#include<iostream>
using namespace std;
int main ()
{
    int num,rev=0;
    cout<<"Enter a number:";
    cin>>num;
    for(int i=num; i!=0; i/=10)
    {
        int temp = i%10;
        rev = rev*10+temp;
    }
cout<<"The reverse number is:"<<rev<<endl;
    return 0;
}