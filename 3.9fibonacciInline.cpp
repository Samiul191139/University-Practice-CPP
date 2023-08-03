#include <iostream>
using namespace std;
inline int fibonacci(int a, int b)
{
    int sum = a + b;
    cout<<sum<<" ";
    return sum;
}
int main()
{
    int a=0,b=1,sum,n;
    cout<<"Enter series limit:";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for (int i = 0; i < n-2; i++)
    {
        sum=fibonacci(a,b);
        a = b;
        b = sum;
    }
cout<<endl;
    return 0;
}