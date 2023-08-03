#include<iostream>
#include<cmath>
using namespace std;
inline int power(int b, int p)
{
    int ans = pow(b,p);
    return ans;
}
int main()
{
    int b,p,ans;
    cout<<"Enter Base:";
    cin>>b;
    cout<<"Enter Power:";
    cin>>p;
    ans = power(b,p);
    cout<<"The answer is:"<<ans;
}