#include<iostream>
using namespace std;
inline float circle_area(float r)
{
    float ans = 3.1416*(r*r);
    return ans;
}
int main()
{
    float r,ans;
    cout<<"Enter the radius:";
    cin>>r;
    ans=circle_area(r);
    cout<<"The area of the circle is: "<<ans;
    return 0;
}